#include "zkresult.hpp"

struct
{
    int code;
    const char* message;
} resultdesc[] =
{
    { ZKR_UNSPECIFIED, "ZKR_UNSPECIFIED" },
    { ZKR_SUCCESS, "ZKR_SUCCESS" },
    { ZKR_DB_KEY_NOT_FOUND, "ZKR_DB_KEY_NOT_FOUND" },
    { ZKR_DB_ERROR, "ZKR_DB_ERROR" },
    { ZKR_INTERNAL_ERROR, "ZKR_INTERNAL_ERROR" },
    { ZKR_SM_MAIN_ASSERT, "ZKR_SM_MAIN_ASSERT" },
    { ZKR_SM_MAIN_ARITH, "ZKR_SM_MAIN_ARITH" },
    { ZKR_SM_MAIN_BINARY, "ZKR_SM_MAIN_BINARY" },
    { ZKR_SM_MAIN_HASHP, "ZKR_SM_MAIN_HASHP" },
    { ZKR_SM_MAIN_HASHK, "ZKR_SM_MAIN_HASHK" },
    { ZKR_SM_MAIN_STORAGE_INVALID_KEY, "ZKR_SM_MAIN_STORAGE_INVALID_KEY" },
    { ZKR_SM_MAIN_MEMORY, "ZKR_SM_MAIN_MEMORY" },
    { ZKR_SM_MAIN_MEMALIGN, "ZKR_SM_MAIN_MEMALIGN" },
    { ZKR_SM_MAIN_ADDRESS, "ZKR_SM_MAIN_ADDRESS" },
    { ZKR_SMT_INVALID_DATA_SIZE, "ZKR_SMT_INVALID_DATA_SIZE" },
    { ZKR_SM_MAIN_BATCH_L2_DATA_TOO_BIG, "ZKR_SM_MAIN_BATCH_L2_DATA_TOO_BIG" },
    { ZKR_AGGREGATED_PROOF_INVALID_INPUT, "ZKR_AGGREGATED_PROOF_INVALID_INPUT" },
    { ZKR_SM_MAIN_OOC_ARITH, "ZKR_SM_MAIN_OOC_ARITH" },
    { ZKR_SM_MAIN_OOC_BINARY, "ZKR_SM_MAIN_OOC_BINARY" },
    { ZKR_SM_MAIN_OOC_MEM_ALIGN, "ZKR_SM_MAIN_OOC_MEM_ALIGN" },
    { ZKR_SM_MAIN_OOC_KECCAK_F, "ZKR_SM_MAIN_OOC_KECCAK_F" },
    { ZKR_SM_MAIN_OOC_PADDING_PG, "ZKR_SM_MAIN_OOC_PADDING_PG" },
    { ZKR_SM_MAIN_OOC_POSEIDON_G, "ZKR_SM_MAIN_OOC_POSEIDON_G" },
    { ZKR_HASHDB_GRPC_ERROR, "ZKR_HASHDB_GRPC_ERROR" },
    { ZKR_SM_MAIN_OUT_OF_STEPS, "ZKR_SM_MAIN_OUT_OF_STEPS" },
    { ZKR_SM_MAIN_INVALID_FORK_ID, "ZKR_SM_MAIN_INVALID_FORK_ID" },
    { ZKR_SM_MAIN_INVALID_UNSIGNED_TX, "ZKR_SM_MAIN_INVALID_UNSIGNED_TX" },
    { ZKR_SM_MAIN_BALANCE_MISMATCH, "ZKR_SM_MAIN_BALANCE_MISMATCH" },
    { ZKR_SM_MAIN_FEA2SCALAR, "ZKR_SM_MAIN_FEA2SCALAR" },
    { ZKR_SM_MAIN_TOS32, "ZKR_SM_MAIN_TOS32" },
    { ZKR_SM_MAIN_BATCH_INVALID_INPUT, "ZKR_SM_MAIN_BATCH_INVALID_INPUT" },
    { ZKR_SM_MAIN_S33, "ZKR_SM_MAIN_S33" },
    { ZKR_STATE_MANAGER, "ZKR_STATE_MANAGER" },
    { ZKR_SM_MAIN_INVALID_NO_COUNTERS, "ZKR_SM_MAIN_INVALID_NO_COUNTERS" },
    { ZKR_SM_MAIN_ARITH_ECRECOVER_DIVIDE_BY_ZERO, "ZKR_SM_MAIN_ARITH_ECRECOVER_DIVIDE_BY_ZERO" },
    { ZKR_SM_MAIN_ADDRESS_OUT_OF_RANGE, "ZKR_SM_MAIN_ADDRESS_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_ADDRESS_NEGATIVE, "ZKR_SM_MAIN_ADDRESS_NEGATIVE" },
    { ZKR_SM_MAIN_HASHK_SIZE_OUT_OF_RANGE, "ZKR_SM_MAIN_HASHK_SIZE_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_HASHK_POSITION_NEGATIVE, "ZKR_SM_MAIN_HASHK_POSITION_NEGATIVE" },
    { ZKR_SM_MAIN_HASHK_POSITION_PLUS_SIZE_OUT_OF_RANGE, "ZKR_SM_MAIN_HASHK_POSITION_PLUS_SIZE_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_HASHKDIGEST_ADDRESS_NOT_FOUND, "ZKR_SM_MAIN_HASHKDIGEST_ADDRESS_NOT_FOUND" },
    { ZKR_SM_MAIN_HASHKDIGEST_NOT_COMPLETED, "ZKR_SM_MAIN_HASHKDIGEST_NOT_COMPLETED" },
    { ZKR_SM_MAIN_HASHP_SIZE_OUT_OF_RANGE, "ZKR_SM_MAIN_HASHP_SIZE_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_HASHP_POSITION_NEGATIVE, "ZKR_SM_MAIN_HASHP_POSITION_NEGATIVE" },
    { ZKR_SM_MAIN_HASHP_POSITION_PLUS_SIZE_OUT_OF_RANGE, "ZKR_SM_MAIN_HASHP_POSITION_PLUS_SIZE_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_HASHPDIGEST_ADDRESS_NOT_FOUND, "ZKR_SM_MAIN_HASHPDIGEST_ADDRESS_NOT_FOUND" },
    { ZKR_SM_MAIN_HASHPDIGEST_NOT_COMPLETED, "ZKR_SM_MAIN_HASHPDIGEST_NOT_COMPLETED" },
    { ZKR_SM_MAIN_MEMALIGN_OFFSET_OUT_OF_RANGE, "ZKR_SM_MAIN_MEMALIGN_OFFSET_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_MULTIPLE_FREEIN, "ZKR_SM_MAIN_MULTIPLE_FREEIN" },
    { ZKR_SM_MAIN_STORAGE_READ_MISMATCH, "ZKR_SM_MAIN_STORAGE_READ_MISMATCH" },
    { ZKR_SM_MAIN_STORAGE_WRITE_MISMATCH, "ZKR_SM_MAIN_STORAGE_WRITE_MISMATCH" },
    { ZKR_SM_MAIN_HASHK_VALUE_MISMATCH, "ZKR_SM_MAIN_HASHK_VALUE_MISMATCH" },
    { ZKR_SM_MAIN_HASHK_PADDING_MISMATCH, "ZKR_SM_MAIN_HASHK_PADDING_MISMATCH" },
    { ZKR_SM_MAIN_HASHK_SIZE_MISMATCH, "ZKR_SM_MAIN_HASHK_SIZE_MISMATCH" },
    { ZKR_SM_MAIN_HASHKLEN_LENGTH_MISMATCH, "ZKR_SM_MAIN_HASHKLEN_LENGTH_MISMATCH" },
    { ZKR_SM_MAIN_HASHKLEN_CALLED_TWICE, "ZKR_SM_MAIN_HASHKLEN_CALLED_TWICE" },
    { ZKR_SM_MAIN_HASHKDIGEST_NOT_FOUND, "ZKR_SM_MAIN_HASHKDIGEST_NOT_FOUND" },
    { ZKR_SM_MAIN_HASHKDIGEST_DIGEST_MISMATCH, "ZKR_SM_MAIN_HASHKDIGEST_DIGEST_MISMATCH" },
    { ZKR_SM_MAIN_HASHKDIGEST_CALLED_TWICE, "ZKR_SM_MAIN_HASHKDIGEST_CALLED_TWICE" },
    { ZKR_SM_MAIN_HASHP_VALUE_MISMATCH, "ZKR_SM_MAIN_HASHP_VALUE_MISMATCH" },
    { ZKR_SM_MAIN_HASHP_PADDING_MISMATCH, "ZKR_SM_MAIN_HASHP_PADDING_MISMATCH" },
    { ZKR_SM_MAIN_HASHP_SIZE_MISMATCH, "ZKR_SM_MAIN_HASHP_SIZE_MISMATCH" },
    { ZKR_SM_MAIN_HASHPLEN_LENGTH_MISMATCH, "ZKR_SM_MAIN_HASHPLEN_LENGTH_MISMATCH" },
    { ZKR_SM_MAIN_HASHPLEN_CALLED_TWICE, "ZKR_SM_MAIN_HASHPLEN_CALLED_TWICE" },
    { ZKR_SM_MAIN_HASHPDIGEST_DIGEST_MISMATCH, "ZKR_SM_MAIN_HASHPDIGEST_DIGEST_MISMATCH" },
    { ZKR_SM_MAIN_HASHPDIGEST_CALLED_TWICE, "ZKR_SM_MAIN_HASHPDIGEST_CALLED_TWICE" },
    { ZKR_SM_MAIN_ARITH_MISMATCH, "ZKR_SM_MAIN_ARITH_MISMATCH" },
    { ZKR_SM_MAIN_ARITH_ECRECOVER_MISMATCH, "ZKR_SM_MAIN_ARITH_ECRECOVER_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_ADD_MISMATCH, "ZKR_SM_MAIN_BINARY_ADD_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_SUB_MISMATCH, "ZKR_SM_MAIN_BINARY_SUB_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_LT_MISMATCH, "ZKR_SM_MAIN_BINARY_LT_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_SLT_MISMATCH, "ZKR_SM_MAIN_BINARY_SLT_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_EQ_MISMATCH, "ZKR_SM_MAIN_BINARY_EQ_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_AND_MISMATCH, "ZKR_SM_MAIN_BINARY_AND_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_OR_MISMATCH, "ZKR_SM_MAIN_BINARY_OR_MISMATCH" },
    { ZKR_SM_MAIN_BINARY_XOR_MISMATCH, "ZKR_SM_MAIN_BINARY_XOR_MISMATCH" },
    { ZKR_SM_MAIN_MEMALIGN_WRITE_MISMATCH, "ZKR_SM_MAIN_MEMALIGN_WRITE_MISMATCH" },
    { ZKR_SM_MAIN_MEMALIGN_WRITE8_MISMATCH, "ZKR_SM_MAIN_MEMALIGN_WRITE8_MISMATCH" },
    { ZKR_SM_MAIN_MEMALIGN_READ_MISMATCH, "ZKR_SM_MAIN_MEMALIGN_READ_MISMATCH" },
    { ZKR_SM_MAIN_HASHK_READ_OUT_OF_RANGE, "ZKR_SM_MAIN_HASHK_READ_OUT_OF_RANGE" },
    { ZKR_SM_MAIN_HASHP_READ_OUT_OF_RANGE, "ZKR_SM_MAIN_HASHP_READ_OUT_OF_RANGE" },
    { ZKR_DB_VERSION_NOT_FOUND_KVDB, "ZKR_DB_VERSION_NOT_FOUND_KBDB" },
    { ZKR_DB_VERSION_NOT_FOUND_GLOBAL, "ZKR_DB_VERSION_NOT_FOUND_GLOBAL"}

    
};

string zkresult2string (int code)
{
    for (int i = 0; resultdesc[i].message; i++)
        if (resultdesc[i].code == code)
            return resultdesc[i].message;
    return "unknown";
}