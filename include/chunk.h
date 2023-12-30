#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum
{
    OP_RETURN,
} OpCode;

typedef struct
{
    int count;
    int capacity;
    u8* code;
} Chunk;

void initChunk(Chunk* chunk);

#endif
