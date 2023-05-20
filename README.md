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
Default format is MM-D80 aka MONTEZUMA CP/M format

![Screenshot 2023-05-20 085231](https://github.com/Egbert-Azure/Z80-CP-M-format-reader/assets/55332675/fdabdd6e-a530-444a-bb07-06de9e116463)

![Screenshot 2023-05-20 085054](https://github.com/Egbert-Azure/Z80-CP-M-format-reader/assets/55332675/4bf05a34-fb91-4186-9c38-c7e0487ab310)

## Change Log

- 03/19/2023: Possible alien disk formats limited to 80 characters in total, reduced to 8 bytes per name compared to the original 10 bytes.
- 03/26/2023: Updated MM-D80 skew table, fixed a bug.
- 05/14/2023: Additional formats added by Jens Guenther.

Output of the possible disk formats was truncated in 'foreign' after one line. In Holte CP/M, there is a 'screen control code' ESC X that enables 'automatic line break' and displays all entries

- 05/17/2023: Added functionality to automatically enable 'automatic line break' using the screen control code ESC X, allowing all entries to be displayed in the 'foreign' output.Implemented the option to turn off 'automatic line break' after displaying the list. Updated the length back to 10 characters for a more organized and visually appealing listing.

Please refer to the source code for further details and implementation.

## Supported formats

## Startlist
(lower letters in `db 'name $'` signals: not working properly)
- `db 'MM-D80    $'`  
  - Description: Default - MONTEZUMA CP/M format: MM-D80 - exchange format via TRSTOOLS
  - Format: Montezuma Micro 80T DS DATA (80T, DS, DD, 800K, 512 Bytes, Skew 2)
  - Variable: `dw mmd80`

- `db 'ALPHA     $'`
  - Description: Alphatronic P3
  - Format: (80T, DS, DD, 790K, 1024 Bytes)
  - Variable: `dw alpha`

- `db 'ASTER-3S  $'`
  - Description: Aster CT-80 System
  - Format: (80T, DS, DD, 780K, 1024 Bytes)
  - Variable: `dw aster3s`

- `db 'HOLTE-G3  $'`  
  - Description: Thomas Holte CP/M 2.2c/3.0a
  - Format: (80T, DS, DD, 768K, 512 Bytes)
  - Variable: `dw holteg3`

- `db 'MS-DOS    $'`  
  - Description: MS-DOS
  - Format: N/A
  - Variable: `dw MSDOS`

- `db 'S80-DD    $'`  
  - Description: Klaus Kaempf CP/M 2.2x/3.0 System
  - Format: (80T, DS, DD, 768K, 1024 Bytes)
  - Variable: `dw s80dsdd`

- `db 'D80-DD    $'`  
  - Description: Klaus Kaempf CP/M 2.2x/3.0 Data
  - Format: (80T, DS, DD, 800K, 1024 Bytes)
  - Variable: `dw d80dsdd`

- `db 'KAYPRO-2  $'`  
  - Description: Kaypro II
  - Format: (40T, SS, DD, 196K, 512 Bytes)
  - Variable: `dw kaypro2`

- `db 'KAYPRO-4  $'`  
  - Description: Kaypro 4 & 10
  - Format: (40T, DS, DD, 392K, 512 Bytes)
  - Variable: `dw kaypro4`

- `db 'Kontron   $'`
  - Description: KONTRON PSI 908/9C/98
  - Format: (77T, DS, DD, 256 Bytes, Skew 3)
  - Variable: `dw kontron`

- `db 'LNW-80    $'`  
  - Description: LNW Research LNW80
  - Format: (40T, SS, DD, 166K, 256 Bytes, Skew 5)
  - Variable: `dw lnw80`

- `db 'LOWE-A1   $'`  
  - Description: Lowe Electronics CP/M 2.2a
  - Format: (80T, SS, DD, 346K, 256 Bytes)
  - Variable: `dw lowea1`

- `db 'LOWE-A2   $'`  
  - Description: Lowe Electronics CP/M 2.2a
  - Format: (80T, DS, DD, 696K, 256 Bytes)
  - Variable: `dw lowea2`

- `db 'LOWE-B1   $'`  
  - Description: Lowe Electronics CP/M 2.2b
  - Format: (80T, SS)
- `db 'LOWE-B2   $'`
  - Description: Lowe Electronics CP/M 2.2b
  - Format: (80T, DS, DD, 696K, 256 Bytes, 4K Block)
  - Variable: `dw loweb2`

- `db 'MM-S40    $'`
  - Description: Montezuma Micro 40T Standard SYSTEM
  - Format: (40T, SS, DD, 170K, 256 Bytes, Skew 2)
  - Variable: `dw mms40`

- `db 'MM-D40    $'`
  - Description: Montezuma Micro 40T Standard DATA
  - Format: (40T, SS, DD, 200K, 512 Bytes, Skew 2)
  - Variable: `dw mmd40`

- `db 'MM-S80    $'`
  - Description: Montezuma Micro 80T DS SYSTEM
  - Format: (80T, DS, DD, 710K, 256 Bytes, Skew 2)
  - Variable: `dw mms80`

- `db 'Mattes    $'`
  - Description: Eberhard Mattes Genie I CP/M 2.2
  - Format: (80T, DS, DD, 780K, 512 Bytes)
  - Variable: `dw mattes`

- `db 'MORROW    $'`
  - Description: Morrow Micro Decision
  - Format: (40T, SS, DD, 190K, 1024 Bytes, Skew 3)
  - Variable: `dw morrow`

- `db 'MD3       $'`
  - Description: Morrow Micro Decision MD3
  - Format: (40T, DS, DD, 390K, 1024 Bytes, Skew 3)
  - Variable: `dw md3ds`

- `db 'PROF#4    $'`
  - Description: Prof80 (Format IV)
  - Format: (80T, DS, DD, 770K, 512 Bytes, Skew 2)
  - Variable: `dw prof4`

- `db 'OSBORNE   $'`
  - Description: Osborne 1
  - Format: (40T, SS, SD, 90K, 256 Bytes, Skew 2)
  - Variable: `dw osborne`

- `db 'OSBEXEC   $'`
  - Description: Osborne 2 Executive
  - Format: (40T, SS, DD, 185K, 1024 Bytes)
  - Variable: `dw osbexec`

- `db 'QX10      $'`
  - Description: Epson QX-10
  - Format: (40T, DS, DD, 380K, 512 Bytes)
  - Variable: `dw qx10`

- `db 'RAINBOW   $'`
  - Description: DEC Rainbow 100+
  - Format: (80T, SS, DD, 390K, 512 Bytes, Skew 2)
  - Variable: `dw rainbow`

- `db 'RAIR      $'`
  - Description: N/A
  - Format: N/A
  - Variable: `dw rair`

- `db 'DECROBIN  $'`
  - Description: DEC VT-180 "Robin"
  - Format: (40T, SS, DD, 171K, 512 Bytes, Skew 2)
  - Variable: `dw robin`

- `db 'SCHMIDTKE $'`
  - Description: Schmidtke Genie I CP/M 2.2 System
  - Format: (80T, DS, DD, 768K, 1024 Bytes)
- `db 'TV802     $'`
  - Description: Televideo 802
  - Format: (40T, DS, DD, 342K, 256 Bytes)
  - Variable: `dw tv802`

- `db 'VORTEX    $'`
  - Description: Amstrad CPC Vortex
  - Format: (80T, DS, DD, 712K, 512 Bytes)
  - Variable: `dw vortex`

- `db 'ZORBA     $'`
  - Description: Zorba
  - Format: (40T, DS, DD, 390K, 512 Bytes)
  - Variable: `dw zorba`

- `db 00`
  - Description: End of the list

## Drop a Star ⭐

If you like this project then drop a Github star by pressing the Star button ⭐
