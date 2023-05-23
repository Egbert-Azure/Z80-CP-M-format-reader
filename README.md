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

### CP/M Formats Supported by 'foreign.com Ver 2.0'

- **MM-D80**
  - Description: Montezuma CP/M format: MM-D80 - exchange format via TRSTOOLS
  - Variable: `mmd80`

- **ALPHA**
  - Description: Alphatronic P3
  - Variable: `alpha`

- **ASTER-3S**
  - Description: Aster CT-80 System
  - Variable: `aster3s`

- **HOLTE-G3**
  - Description: Thomas Holte CP/M 2.2c/3.0a
  - Variable: `holteg3`

- **MS-DOS**
  - Description: MS-DOS discs
  - Variable: `MSDOS`

- **S80-DD**
  - Description: Klaus Kaempf CP/M 2.2x/3.0 System
  - Variable: `s80dsdd`

- **D80-DD**
  - Description: Klaus Kaempf CP/M 2.2x/3.0 Data
  - Variable: `d80dsdd`

- **KAYPRO-2**
  - Description: Kaypro II
  - Variable: `kaypro2`

- **Kaypro-4**
  - Description: Kaypro 4 & 10
  - Variable: `kaypro4`

- **Kontron**
  - Description: KONTRON PSI 908/9C/98
  - Variable: `kontron`

- **EAGLE**
  - Description: Eagle I/II
  - Variable: `eagle`

- **HOLTEG2S**
  - Description: Thomas Holte Genie IIs/Speedmaster CP/M 2.2a System
  - Variable: `holte2s`

- **LNW-80**
  - Description: LNW Research LNW80
  - Variable: `lnw80`

- **LOWE-A1**
  - Description: Lowe Electronics CP/M 2.2a
  - Variable: `lowea1`

- **LOWE-A2**
  - Description: Lowe Electronics CP/M 2.2a
  - Variable: `lowea2`

- **LOWE-B1**
  - Description: Lowe Electronics CP/M 2.2b
  - Variable: `loweb1`

- **LOWE-B2**
  - Description: Lowe Electronics CP/M 2.2b
  - Variable: `loweb2`

- **MM-S40**
  - Description: Montezuma Micro 40T Standard SYSTEM
  - Variable: `mms40`

- **MM-D40**
  - Description: Montezuma Micro 40T Standard DATA
  - Variable: `mmd40`

- **MM-S80**
  - Description: Montezuma Micro 80T DS SYSTEM
  - Variable: `mms80`

- **Mattes**
  - Description: Eberhard Mattes Genie I CP/M 2.2
  - Variable: `mattes`

- **MORROW**
  - Description: Morrow Micro Decision
  - Variable: `morrow`

- **MD3**
  - Description: Morrow Micro Decision MD3
  - Variable: `md3ds`

- **PROF#4**
  - Description: Prof80
  - Variable: `prof4`

- **OSBORNE**
  - Description: Osborne 1
  - Variable: `os
- **OSBEXEC**
  - Description: Osborne 2 Executive
  - Variable: `osbexec`

- **QX10**
  - Description: Epson QX-10
  - Variable: `qx10`

- **RAINBOW**
  - Description: DEC Rainbow 100+
  - Variable: `rainbow`

- **RAIR**
  - Description: Rair
  - Variable: `rair`

- **DECROBIN**
  - Description: DEC VT-180 "Robin"
  - Variable: `robin`

- **SCHMIDTKE**
  - Description: Schmidtke Genie I CP/M 2.2 System
  - Variable: `schmid`

- **SCHROEDER**
  - Description: Gerald Schroeder Genie IIs CP/M 2.2 System
  - Variable: `gsg2s`

- **TV802**
  - Description: Televideo 802
  - Variable: `tv802`

- **VIS1050**
  - Description: Visual 1050
  - Variable: `vis1050`

- **VORTEX**
  - Description: Amstrad CPC Vortex
  - Variable: `vortex`

- **ZORBA**
  - Description: Zorba
  - Variable: `zorba`

## Drop a Star ⭐

If you like this project then drop a Github star by pressing the Star button ⭐
