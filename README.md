<div align="center">

# Z80-CP/M Format Reader

**Utility for Genie IIIs with Holte CP/M Plus**\
**Created by Volker Dose & Egbert Schroeer**\
**(c) 1992**

**Update for sdltrs emulator (c) 2023**

**First assembler code since 30 years by E. Schroeer**

**With crowd knowledge of Jens Guenther & Fritz Chwolka :)**

</div>

This utility allows reading various foreign formats using HOLTE-CP/M on Genie IIIs with Holte CP/M Plus. It provides support for the following foreign disk formats:

- TRS80 format: TRS80
- MONTEZUMA CP/M format: MM-D80

HOLTE-CP/M requires the following information to read foreign formats:

1. The DPB (Disk Parameter Block)
2. The DTB (Drive Control Table)
3. The sector translation table

These parameters must be created manually beforehand.

## Change Log

- 03/19/2023: Possible alien disk formats limited to 80 characters in total, reduced to 8 bytes per name compared to the original 10 bytes.
- 03/26/2023: Updated MM-D80 skew table, fixed a bug.
- 05/14/2023: Additional formats added by Jens Guenther.

Output of the possible disk formats was truncated in 'foreign' after one line. In Holte CP/M, there is a 'screen control code' ESC X that enables 'automatic line break' and displays all entries

- 05/17/2023: Added functionality to automatically enable 'automatic line break' using the screen control code ESC X, allowing all entries to be displayed in the 'foreign' output.Implemented the option to turn off 'automatic line break' after displaying the list. Updated the length back to 10 characters for a more organized and visually appealing listing.

Please refer to the source code for further details and implementation.

## Supported formats are:

- ALPHA
- ASTER-3S
- HOLTE-G3:   Thomas Holte CP/M 2.2c/3.0a (80T, DS, DD, 768K, 512 Bytes)
- MSDOS
- S80-DD:     Klaus Kaempf CP/M 2.2x/3.0 System (80T, DS, DD, 768K, 1024 Bytes)
- D80-DD:     Klaus Kaempf CP/M 2.2x/3.0 Data (80T, DS, DD, 800K, 1024 Bytes)
- KAYPRO-2:   Kaypro II (40T, SS, DD, 196K, 512 Bytes)
- KAYPRO-4:   Kaypro 4 & 10 (40T, DS, DD, 392K, 512 Bytes)
- KONTRON:    still has bugs
- LNW-80:     LNW Research LNW80 (40T, SS, DD, 166K, 256 Bytes, Skew 5)
- LOWE-A1:    Lowe Electronics CP/M 2.2a (80T, SS, DD, 346K, 256 Bytes)
- LOWE-A2:    Lowe Electronics CP/M 2.2a (80T, DS, DD, 696K, 256 Bytes)
- LOWE-B2:    Lowe Electronics CP/M 2.2b (80T, SS, DD, 384K, 256 Bytes, 4K Block)
- MM-S40:     Montezuma Micro 40T Standard SYSTEM (40T, SS, DD, 170K, 256 Bytes, Skew 2)
- MM-D40:     Montezuma Micro 40T Standard DATA (40T, SS, DD, 200K, 512 Bytes, Skew 2)
- MM-S80:     Montezuma Micro 80T DS SYSTEM (80T, DS, DD, 710K, 256 Bytes, Skew 2)
- MM-D80:     Montezuma Micro 80T DS DATA (80T, DS, DD, 800K, 512 Bytes, Skew 2)
- MATTES:     still has bugs
- MORROW:     Morrow Micro Decision (40T, SS, DD, 190K, 1024 Bytes, Skew 3)
- MD3:        Morrow Micro Decision MD3 (40T, DS, DD, 390K, 1024 Bytes, Skew 3)
- PROF#4:     Schmidtke Genie I CP/M 2.2 System (80T, DS, DD, 768K, 1024 Bytes)
- RAIR:       
- SCHMIDTKE
- VORTEX

## Drop a Star ⭐ ##

If you like this project then drop a Github star by pressing the Star button ⭐
