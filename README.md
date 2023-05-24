<div align="center">

# Z80-CP/M and Alien Disk Format Reader

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
Default format is MM-D80 aka MONTEZUMA CP/M format.

![Screenshot 2023-05-20 085231](https://github.com/Egbert-Azure/Z80-CP-M-format-reader/assets/55332675/fdabdd6e-a530-444a-bb07-06de9e116463)

![Screenshot 2023-05-20 085054](https://github.com/Egbert-Azure/Z80-CP-M-format-reader/assets/55332675/4bf05a34-fb91-4186-9c38-c7e0487ab310)

## Change Log

- 03/19/2023: Possible alien disk formats limited to 80 characters in total, reduced to 8 bytes per name compared to the original 10 bytes.
- 03/26/2023: Updated MM-D80 skew table, fixed a bug.
- 05/14/2023: Additional formats added by Jens Guenther.

Output of the possible disk formats was truncated in 'foreign' after one line. In Holte CP/M, there is a 'screen control code' ESC X that enables 'automatic line break' and displays all entries

- 05/17/2023: Added functionality to automatically enable 'automatic line break' using the screen control code ESC X, allowing all entries to be displayed in the 'foreign' output.Implemented the option to turn off 'automatic line break' after displaying the list. Updated the length back to 10 characters for a more organized and visually appealing listing.

Please refer to the source code for further details and implementation.

### Formats Supported by 'foreign.com Ver 2.0'

- **MM-D80:** Montezuma CP/M format: MM-D80 - exchange format via TRSTOOLS (`dw mmd80`)
- **ALPHA:** Alphatronic P3 (80T, DS, DD, 790K, 1024 Bytes) (`dw alpha`)
- **ASTER-3S:** Aster CT-80 System (80T, DS, DD, 780K, 1024 Bytes) (`dw aster3s`)
- **HOLTE-G3:** Thomas Holte CP/M 2.2c/3.0a (80T, DS, DD, 768K, 512 Bytes) (`dw holteg3`)
- **MS-DOS:** MS-DOS discs (`dw MSDOS`)
- **S80-DD:** Klaus Kaempf CP/M 2.2x/3.0 System (80T, DS, DD, 768K, 1024 Bytes) (`dw s80dsdd`)
- **D80-DD:** Klaus Kaempf CP/M 2.2x/3.0 Data (80T, DS, DD, 800K, 1024 Bytes) (`dw d80dsdd`)
- **KAYPRO-2:** Kaypro II (40T, SS, DD, 196K, 512 Bytes) (`dw kaypro2`)
- **Kaypro-4:** Kaypro 4 & 10 (40T, DS, DD, 392K, 512 Bytes) (`dw kaypro4`)
- **Kontron:** KONTRON PSI 908/9C/98 (77T, DS, DD, 256 Bytes, Skew 3) (`dw kontron`)
- **EAGLE:** Eagle I/II (80T, SS, DD, 390K, 1024 Bytes, Skew 2) (`dw eagle`)
- **HOLTEG2S:** Thomas Holte Genie IIs/Speedmaster CP/M 2.2a System (80T, SS, DD, 390K, 512 Bytes) (`dw holte2s`)
- **LNW-80:** LNW Research LNW80 (40T, SS, DD, 166K, 256 Bytes, Skew 5) (`dw lnw80`)
- **LOWE-A1:** Lowe Electronics CP/M 2.2a (80T, SS, DD, 346K, 256 Bytes) (`dw lowea1`)
- **LOWE-A2:** Lowe Electronics CP/M 2.2a (80T, DS, DD, 696K, 256 Bytes) (`dw lowea2`)
- **LOWE-B1:** Lowe Electronics CP/M 2.2b (80T, SS, DD, 384K, 256 Bytes, 4K Block) (`dw loweb1`)
- **LOWE-B2:** Lowe Electronics CP/M 2.2b (80T, DS, DD, 696K, 256 Bytes, 4K Block) (`dw loweb2`)
- **MS-DOS:** MS-DOS discs (`dw MSDOS`)
- **MM-S40:** Montezuma Micro 40T Standard SYSTEM (40T, SS, DD, 170K, 256 Bytes, Skew 2) (`dw mms40`)
- **MM-D40:** Montezuma Micro 40T Standard DATA (40T, SS, DD, 200K, 512 Bytes, Skew 2) (`dw mmd40`)
- **MM-S80:** Montezuma Micro 80T DS SYSTEM (80T, DS, DD, 710K, 256 Bytes, Skew 2) (`dw mms80`)
- **Mattes:** Eberhard Mattes Genie I CP/M 2.2 (80T, DS, DD, 780K, 512 Bytes) (`dw mattes`)
- **MORROW:** Morrow Micro Decision (40T, SS, DD, 190K, 1024 Bytes, Skew 3) (`dw morrow`)
- **MD3:** Morrow Micro Decision MD3 (40T, DS, DD, 390K, 1024 Bytes, Skew 3) (`dw md3ds`)
- **PROF#4:** Prof80 (Format IV: 80T, DS, DD, 770K, 512 Bytes, Skew 2) (`dw prof4`)
- **OSBORNE:** Osborne 1 (40T, SS, SD, 90K, 256 Bytes, Skew 2) (`dw osborne`)
- **OSBEXEC:** Osborne 2 Executive (40T, SS, DD, 185K, 1024 Bytes) (`dw osbexec`)
- **QX10:** Epson QX-10 (40T, DS, DD, 380K, 512 Bytes) (`dw qx10`)
- **RAINBOW:** DEC Rainbow 100+ (80T, SS, DD, 390K, 512 Bytes, Skew 2) (`dw rainbow`)
- **RAIR:** Rair (`dw rair`)
- **DECROBIN:** DEC VT-180 "Robin" (40T, SS, DD, 171K, 512 Bytes, Skew 2) (`dw robin`)
- **SCHMIDTKE:** Schmidtke Genie I CP/M 2.2 System (80T, DS, DD, 768K, 1024 Bytes) (`dw schmid`)
- **SCHROEDER:** Gerald Schroeder Genie IIs CP/M 2.2 System (80T, DS, DD, 768K, 1024 Bytes) (`dw gsg2s`)
- **TV802:** Televideo 802 (40T, DS, DD, 342K, 256 Bytes) (`dw tv802`)
- **VIS1050:** Visual 1050 (80T, SS, DD, 390K, 512 Bytes) (`dw vis1050`)
- **VORTEX:** Amstrad CPC Vortex (80T, DS, DD, 712K, 512 Bytes) (`dw vortex`)
- **ZORBA:** Zorba (40T, DS, DD, 390K, 512 Bytes) (`dw zorba`)

## Drop a Star ⭐

If you like this project then drop a Github star by pressing the Star button ⭐
