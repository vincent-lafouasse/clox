#include "chunk.h"
#include "debug.h"
#include "common.h"

int main(void)
{
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
	disassembleChunk(&chunk, "a nice chunk");
    freeChunk(&chunk);
    return 0;
}
