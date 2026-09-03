/*
 * SKTable.c — offline scratch utility to compute a candidate skew table
 * for hand-transcription into an alien.z80 format block.
 *
 * Copyright (c) 1992 Volker Dose, Egbert H. Schroeer (as FREMD.COM)
 * Copyright (c) 2023-2026 Egbert H. Schroeer
 * Additional format definitions contributed by Jens Guenther.
 *
 * GPL-3.0-only. See LICENSE.
 */

#include <stdio.h>

#define SKEW_TABLE_LENGTH (32 * 3)

int main(void) {
    char skew_table[SKEW_TABLE_LENGTH];
    int i;

    for (i = 0; i < SKEW_TABLE_LENGTH; i++) {
        int sector_offset = i % 32;
        int sector_index = i / 32;
        int track_index = sector_index % 3;
        int skew_sector_index = (track_index * 32) + sector_offset;
        skew_table[i] = skew_sector_index;
    }

    for (i = 0; i < SKEW_TABLE_LENGTH; i++) {
        printf("%d ", skew_table[i]);
    }

    return 0;
}









