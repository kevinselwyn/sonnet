#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _SHAKE_IT_UP
	extern char _binary_sonnet_txt_start;
	extern char _binary_sonnet_txt_end;
#else
	#if !defined(__APPLE__)
		#include <malloc.h>
	#endif

	#define SONNET "./sonnet.txt"
#endif

struct sonnet {
	int start, end;
};

static struct sonnet sonnets[154] = {
	{ 0x000000, 0x00029b },
	{ 0x00029c, 0x000547 },
	{ 0x000548, 0x0007e0 },
	{ 0x0007e1, 0x000a61 },
	{ 0x000a62, 0x000d05 },
	{ 0x000d06, 0x000fa1 },
	{ 0x000fa2, 0x00121e },
	{ 0x00121f, 0x0014da },
	{ 0x0014db, 0x00177d },
	{ 0x00177e, 0x001a21 },
	{ 0x001a22, 0x001d00 },
	{ 0x001d01, 0x001fa9 },
	{ 0x001faa, 0x00223e },
	{ 0x00223f, 0x0024c5 },
	{ 0x0024c6, 0x002766 },
	{ 0x002767, 0x0029f6 },
	{ 0x0029f7, 0x002cb3 },
	{ 0x002cb4, 0x002f5b },
	{ 0x002f5c, 0x003209 },
	{ 0x00320a, 0x0034c8 },
	{ 0x0034c9, 0x003766 },
	{ 0x003767, 0x0039f1 },
	{ 0x0039f2, 0x003c96 },
	{ 0x003c97, 0x003f50 },
	{ 0x003f51, 0x0041d3 },
	{ 0x0041d4, 0x004465 },
	{ 0x004466, 0x0046ee },
	{ 0x0046ef, 0x00499d },
	{ 0x00499e, 0x004c50 },
	{ 0x004c51, 0x004eef },
	{ 0x004ef0, 0x005180 },
	{ 0x005181, 0x00542f },
	{ 0x005430, 0x0056ce },
	{ 0x0056cf, 0x005981 },
	{ 0x005982, 0x005c05 },
	{ 0x005c06, 0x005e94 },
	{ 0x005e95, 0x006115 },
	{ 0x006116, 0x0063b7 },
	{ 0x0063b8, 0x006657 },
	{ 0x006658, 0x00690b },
	{ 0x00690c, 0x006ba3 },
	{ 0x006ba4, 0x006e4f },
	{ 0x006e50, 0x00710b },
	{ 0x00710c, 0x0073b8 },
	{ 0x0073b9, 0x007645 },
	{ 0x007646, 0x0078de },
	{ 0x0078df, 0x007b8a },
	{ 0x007b8b, 0x007e1e },
	{ 0x007e1f, 0x0080b5 },
	{ 0x0080b6, 0x008348 },
	{ 0x008349, 0x0085f2 },
	{ 0x0085f3, 0x008886 },
	{ 0x008887, 0x008b03 },
	{ 0x008b04, 0x008daa },
	{ 0x008dab, 0x00904d },
	{ 0x00904e, 0x0092f3 },
	{ 0x0092f4, 0x00958f },
	{ 0x009590, 0x009827 },
	{ 0x009828, 0x009aac },
	{ 0x009aad, 0x009d4f },
	{ 0x009d50, 0x009fe1 },
	{ 0x009fe2, 0x00a256 },
	{ 0x00a257, 0x00a4f1 },
	{ 0x00a4f2, 0x00a782 },
	{ 0x00a783, 0x00aa2d },
	{ 0x00aa2e, 0x00ac9d },
	{ 0x00ac9e, 0x00af27 },
	{ 0x00af28, 0x00b19f },
	{ 0x00b1a0, 0x00b471 },
	{ 0x00b472, 0x00b70a },
	{ 0x00b70b, 0x00b998 },
	{ 0x00b999, 0x00bc28 },
	{ 0x00bc29, 0x00bedf },
	{ 0x00bee0, 0x00c168 },
	{ 0x00c169, 0x00c3f2 },
	{ 0x00c3f3, 0x00c66c },
	{ 0x00c66d, 0x00c913 },
	{ 0x00c914, 0x00cb8d },
	{ 0x00cb8e, 0x00ce19 },
	{ 0x00ce1a, 0x00d0a6 },
	{ 0x00d0a7, 0x00d352 },
	{ 0x00d353, 0x00d5ed },
	{ 0x00d5ee, 0x00d884 },
	{ 0x00d885, 0x00db22 },
	{ 0x00db23, 0x00ddd9 },
	{ 0x00ddda, 0x00e06e },
	{ 0x00e06f, 0x00e31c },
	{ 0x00e31d, 0x00e5a8 },
	{ 0x00e5a9, 0x00e842 },
	{ 0x00e843, 0x00eadc },
	{ 0x00eadd, 0x00ed8c },
	{ 0x00ed8d, 0x00f00c },
	{ 0x00f00d, 0x00f2bb },
	{ 0x00f2bc, 0x00f55b },
	{ 0x00f55c, 0x00f7fd },
	{ 0x00f7fe, 0x00faa9 },
	{ 0x00faaa, 0x00fd43 },
	{ 0x00fd44, 0x00ffe4 },
	{ 0x00ffe5, 0x0102b8 },
	{ 0x0102b9, 0x01055e },
	{ 0x01055f, 0x0107e7 },
	{ 0x0107e8, 0x010a9f },
	{ 0x010aa0, 0x010d27 },
	{ 0x010d28, 0x010fde },
	{ 0x010fdf, 0x011267 },
	{ 0x011268, 0x0114f7 },
	{ 0x0114f8, 0x0117a9 },
	{ 0x0117aa, 0x011a48 },
	{ 0x011a49, 0x011cd3 },
	{ 0x011cd4, 0x011f6c },
	{ 0x011f6d, 0x0121f9 },
	{ 0x0121fa, 0x012489 },
	{ 0x01248a, 0x012723 },
	{ 0x012724, 0x0129be },
	{ 0x0129bf, 0x012c75 },
	{ 0x012c76, 0x012ef4 },
	{ 0x012ef5, 0x013184 },
	{ 0x013185, 0x013419 },
	{ 0x01341a, 0x0136b8 },
	{ 0x0136b9, 0x013955 },
	{ 0x013956, 0x013bf6 },
	{ 0x013bf7, 0x013e66 },
	{ 0x013e67, 0x0140f5 },
	{ 0x0140f6, 0x014398 },
	{ 0x014399, 0x01461d },
	{ 0x01461e, 0x014870 },
	{ 0x014871, 0x014b0d },
	{ 0x014b0e, 0x014db1 },
	{ 0x014db2, 0x015039 },
	{ 0x01503a, 0x0152d3 },
	{ 0x0152d4, 0x015570 },
	{ 0x015571, 0x0157f9 },
	{ 0x0157fa, 0x015aa5 },
	{ 0x015aa6, 0x015d2d },
	{ 0x015d2e, 0x015fc0 },
	{ 0x015fc1, 0x016269 },
	{ 0x01626a, 0x016521 },
	{ 0x016522, 0x0167c3 },
	{ 0x0167c4, 0x016a72 },
	{ 0x016a73, 0x016d13 },
	{ 0x016d14, 0x016fb5 },
	{ 0x016fb6, 0x017253 },
	{ 0x017254, 0x0174fd },
	{ 0x0174fe, 0x017773 },
	{ 0x017774, 0x0179a8 },
	{ 0x0179a9, 0x017c3d },
	{ 0x017c3e, 0x017ecb },
	{ 0x017ecc, 0x018177 },
	{ 0x018178, 0x0183f1 },
	{ 0x0183f2, 0x018689 },
	{ 0x01868a, 0x018921 },
	{ 0x018922, 0x018bd1 },
	{ 0x018bd2, 0x018e6b },
	{ 0x018e6c, 0x0190f9 }
};

int main(int argc, char *argv[]) {
	int rc = 0, num = 0, start = 0, end = 0, length = 0, i = 0, l = 0;
	char *scrubber = NULL;

#ifndef _SHAKE_IT_UP
	size_t filesize = 0;
	FILE *file = NULL;
#endif

	if (argc < 2) {
		srand((unsigned int)time(NULL));
		num = rand() % 154;
	} else {
		num = atoi(argv[0]);
	}

	start = sonnets[num].start;
	end = sonnets[num].end;
	length = end - start;

	printf("\n");

#ifdef _SHAKE_IT_UP
	*scrubber = &_binary_sonnet_txt_start;
#else
	file = fopen(SONNET, "rb");

	if (!file) {
		printf("Could not open %s\n", SONNET);

		rc = 1;
		goto cleanup;
	}

	(void)fseek(file, 0, SEEK_END);
	filesize = (size_t)ftell(file);
	(void)fseek(file, 0, SEEK_SET);

	if (filesize == 0) {
		printf("%s is empty\n", SONNET);

		rc = 1;
		goto cleanup;
	}

	scrubber = malloc(sizeof(char) * filesize + 1);

	if (!scrubber) {
		printf("Memory error\n");

		rc = 1;
		goto cleanup;
	}

	if (fread(scrubber, 1, filesize, file) != filesize) {
		printf("Could not read %s\n", SONNET);

		rc = 1;
		goto cleanup;
	}
#endif

	for (i = 0, l = length; i < l; i++) {
		(void)putchar(scrubber[start + i]);
	}

#ifndef _SHAKE_IT_UP
cleanup:
	if (file) {
		(void)fclose(file);
	}

	if (scrubber) {
		free(scrubber);
	}
#endif

	return rc;
}