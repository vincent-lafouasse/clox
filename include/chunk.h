#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum {
	OP_RETURN,
} OpCode;

typedef struct {
	u8* code;
} Chunk;

#endif
