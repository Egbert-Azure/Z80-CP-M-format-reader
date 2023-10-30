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

The output of the possible disk formats was truncated in 'alien.com' after one line. Holte CP/M has a 'screen control code' ESC X that enables 'automatic line break' and displays all entries.

- 05/17/2023: Added functionality to automatically enable 'automatic line break' using the screen control code ESC X, allowing all entries to be displayed in the 'foreign' output.Implemented the option to turn off 'automatic line break' after displaying the list. Updated the length back to 10 characters for a more organized and visually appealing listing.

- 7/14/2023: Major change and fix to support different work environments: The default DMA address for transient programs is 0080H. The CCP also initializes this area to contain the command tall of the command line. The first position includes the number of characters in the command line, followed by the command line characters. The character following the last command tail character is set to binary zero. The command line characters are preceded by a leading blank and are translated to ASCII upper-case. This means the actual "Command tail" is only located from address 0082h, since the "Command tail" length is in 0080h and space is automatically inserted in 0081h. That said, with 'Z3PLUS' xtail equ 0082h and with 'CCP' would be xtail equ 0080h KUDOs to Jens Guenther for finding this out and reporting.

- 7/15/2023: bug fixes and update of readme.md; rebranding foreign.com to alien.com
- 09/21/2023: new formats provided by Jens Guenther and new release 3.1

Referring to the source and look at the source code for more information.

# ALIEN.COM 3.1

 # List of implemented alien formats

# List of Implemented Alien Formats

The length of the character string is limited to 10. The first entry is the default format, which is used if no format name is specified.

| Format Name   | Description                                        | Capacity  | Side          | Density        | Capacity   | Sector Size | Skew |
|---------------|----------------------------------------------------|-----------|---------------|----------------|------------|------------|------|
| MM-D80        | MONTEZUMA CP/M format: MM-D80 - exchange format via TRSTOOLS | 80 tracks | Double-sided (DS) | Double density (DD) | 800K       | 512 Bytes   | 2    |
| ABC80         | Luxor ABC80 format                                | 40 tracks | Single-sided (SS) | Double density (DD) | 152K       | 256 Bytes   | 7    |
| ABC800        | Luxor ABC800 format                               | 80 tracks | Double-sided (DS) | Double density (DD) | 760K       | 1024 Bytes  |      |
| ACTRIX        | Actrix Computer Corporation Access Computer format | 80 tracks | Double-sided (DS) | Double density (DD) | 780K       | 1024 Bytes  | 3    |
| ALPHA-P3      | Triumph Adler alphaTronic P3 format               | 80 tracks | Double-sided (DS) | Double density (DD) | 790K       | 1024 Bytes  |      |
| ALPHA-PC      | Triumph Adler alphaTronic PC format               | 40 tracks | Double-sided (DS) | Double density (DD) | 320K       | 256 Bytes   |      |
| ASTER-3S      | Aster CT-80 System format                         | 80 tracks | Double-sided (DS) | Double density (DD) | 780K       | 1024 Bytes  |      |
| ALTOS         | Altos 5-15 format                                 | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 1024 Bytes  |      |
| BOND-2        | Bondwell 2 format                                | 80 tracks | Single-sided (SS) | Double density (DD) | 350K       | 256 Bytes   |      |
| BOND-12       | Bondwell 12 format                               | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 1024 Bytes  |      |
| BULLET        | Wave Mate Bullet format                           | 80 tracks | Double-sided (DS) | Double density (DD) | 790K       | 1024 Bytes  |      |
| CASIO         | Casio FP-1100/FP-1020 format                      | 40 tracks | Double-sided (DS) | Double density (DD) | 320K       | 256 Bytes   |      |
| CPM-8640      | CP/M-86 v2 format                                 | 40 tracks | Double-sided (DS) | Double density (DD) | 360K       | 512 Bytes   |      |
| CPM-8680      | CP/M-86 v2 format                                 | 80 tracks | Double-sided (DS) | Double density (DD) | 720K       | 512 Bytes   |      |
| ELZET         | Elzet 80 format                                  | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 1024 Bytes  |      |
| EXIDY         | Exidy Sorcerer format                            | 40 tracks | Single-sided (SS) | Double density (DD) | 196K       | 512 Bytes   |      |
| GDOS          | GDOS 2.4 format                                  | 80 tracks | Double-sided (DS) | Double density (DD) | 720K       | 256 Bytes   |      |
| HOLTE-G3      | Thomas Holte CP/M 2.2c/3.0a format               | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 512 Bytes   |      |
| KAYPRO-2      | Kaypro II format                                 | 40 tracks | Single-sided (SS) | Double density (DD) | 196K       | 512 Bytes   |      |
| EAGLE         | Eagle I/II format                                | 80 tracks | Single-sided (SS) | Double density (DD) | 390K       | 1024 Bytes  | 2    |
| HOLTEG2S      | Thomas Holte Genie IIs/Speedmaster format        | 80 tracks | Single-sided (SS) | Double density (DD) | 390K       | 512 Bytes   |      |
| LOBO256       | Lobo Systems 256K format                         | 80 tracks | Single-sided (SS) | Double density (DD) | 256K       | 512 Bytes   |      |
| LOBO512       | Lobo Systems 512K format                         | 80 tracks | Double-sided (DS) | Double density (DD) | 512K       | 512 Bytes   |      |
| LNW-256       | LNW Research lnw256 format                      | 40 tracks | Single-sided (SS) | Double density (DD) | 166K       | 256 Bytes   | 5    |
| LNW-512       | LNW Research lnw256 format                      | 40 tracks | Single-sided (SS) | Double density (DD) | 332K       | 512 Bytes   | 5    |
| LOWE-A1       | Lowe Electronics CP/M 2.2a format                | 80 tracks | Single-sided (SS) | Double density (DD) | 346K       | 256 Bytes   |      |
| LOWE-A2       | Lowe Electronics CP/M 2.2a format                | 80 tracks | Double-sided (DS) | Double density (DD) | 696K       | 256 Bytes   |      |
| LOWE-B1       | Lowe Electronics CP/M 2.2b format                | 80 tracks | Single-sided (SS) | Double density (DD) | 384K       | 256 Bytes   | 4K Block |
| LOWE-B2       | Lowe Electronics CP/M 2.2b format                | 80 tracks | Double-sided (DS) | Double density (DD) | 696K       | 256 Bytes   | 4K Block |
| MAGIC         | Magic PBC-88 format                              | 40 tracks | Double-sided (DS) | Double density (DD) | 390K       | 512 Bytes   |      |
| MBC-1200      | Sanyo MBC-1200/1250 format                        | 80 tracks | Double-sided (DS) | Double density (DD) | 624K       | 256 Bytes   | 3    |
| MBC-1000      | Sanyo MBC-1000/1100 format                        | 40 tracks | Double-sided (DS) | Double density (DD) |
| MBC-1000      | Sanyo MBC-1000/1100 format                        | 40 tracks | Double-sided (DS) | Double density (DD) | 312K       | 256 Bytes   | 3    |
| MS-DOS        | MS-DOS format                                    | 80 tracks | Double-sided (DS) | Double density (DD) | 720K       | 1024 Bytes  |      |
| MM-S40        | Montezuma Micro 40T Standard SYSTEM format        | 40 tracks | Single-sided (SS) | Double density (DD) | 170K       | 256 Bytes   | 2    |
| MM-D40        | Montezuma Micro 40T Standard DATA format          | 40 tracks | Single-sided (SS) | Double density (DD) | 200K       | 512 Bytes   | 2    |
| MM-S80        | Montezuma Micro 80T DS SYSTEM format              | 80 tracks | Double-sided (DS) | Double density (DD) | 710K       | 256 Bytes   | 2    |
| MCCPM         | MCCP/M format                                    | 80 tracks | Double-sided (DS) | Double density (DD) | 800K       | 1024 Bytes  |      |
| MORROW        | Morrow Micro Decision format                      | 40 tracks | Single-sided (SS) | Double density (DD) | 190K       | 1024 Bytes  | 3    |
| MONROE        | Monroe 1860 format                               | 40 tracks | Single-sided (SS) | Double density (DD) | 190K       | 1024 Bytes  | 3    |
| MD3           | Morrow Micro Decision MD3 format                  | 40 tracks | Double-sided (DS) | Double density (DD) | 390K       | 1024 Bytes  | 3    |
| NABUPC        | NABU PC format                                   | 80 tracks | Double-sided (DS) | Double density (DD) | 800K       | 1024 Bytes  |      |
| NEC-8800      | NEC PC-8800/8801 format                          | 40 tracks | Double-sided (DS) | Double density (DD) | 306K       | 256 Bytes   |      |
| PROF#4        | Prof80 (Format IV) format                        | 80 tracks | Double-sided (DS) | Double density (DD) | 770K       | 512 Bytes   | 2    |
| OMIKRON       | Omikron Mapper I TRS-80 Model I/III format        | 35 tracks | Single-sided (SS) | Single density (SD) | 83K        | 128 Bytes   | 4    |
| OR512         | Oettle & Reichler format                         | 80 tracks | Double-sided (DS) | Double density (DD) | 702K       | 512 Bytes   | 3    |
| OR1024        | Oettle & Reichler format                         | 80 tracks | Double-sided (DS) | Double density (DD) | 702K       | 1024 Bytes  | 3    |
| OSBORNE       | Osborne 1 format                                 | 40 tracks | Single-sided (SS) | Single density (SD) | 90K        | 256 Bytes   | 2    |
| OSBEXEC       | Osborne 2 Executive format                       | 40 tracks | Single-sided (SS) | Double density (DD) | 185K       | 1024 Bytes  |      |
| QX10          | Epson QX-10 format                               | 40 tracks | Double-sided (DS) | Double density (DD) | 380K       | 512 Bytes   |      |
| RAINBOW       | DEC Rainbow 100+ format                         | 80 tracks | Single-sided (SS) | Double density (DD) | 390K       | 512 Bytes   | 2    |
| RAIR          | Rair Black Box format                            | 40 tracks | Single-sided (SS) | Double density (DD) | 190K       | 1024 Bytes  | 3    |
| ROBO-D40      | Robotron PC 1715 Data format                     | 40 tracks | Single-sided (SS) | Double density (DD) | 190K       | 1024 Bytes  | Data Disk |
| ROBO-S40      | Robotron PC 1715 Data format                     | 40 tracks | Single-sided (SS) | Double density (DD) | 190K       | 1024 Bytes  | System Disk |
| ROBO-D80      | Robotron PC 1715 Data format                     | 80 tracks | Double-sided (DS) | Double density (DD) | 780K       | 1024 Bytes  | Data Disk |
| ROBO-S80      | Robotron PC 1715 Data format                     | 80 tracks | Double-sided (DS) | Double density (DD) | 780K       | 1024 Bytes  | System Disk |
| RSCPM3        | Radio Shack TRS-80 Model 4/4P CP/M Plus format    | 40 tracks | Single-sided (SS) | Double density (DD) | 156K       | 512 Bytes   |      |
| DECROBIN      | DEC VT-180 "Robin" format                        | 40 tracks | Single-sided (SS) | Double density (DD) | 171K       | 512 Bytes   | 2    |
| SCHMIDTKE     | Schmidtke Genie I CP/M 2.2 System format          | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 1024 Bytes  |      |
| SCHROEDER     | Gerald Schroeder Genie IIs CP/M 2.2 System format | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 1024 Bytes  |      |
| SOABAR        | Soabar CDX 31 format                             | 40 tracks | Double-sided (DS) | Double density (DD) | 390K       | 1024 Bytes  |      |
| S80-DD        | Klaus Kaempf CP/M 2.2x/3.0 System format          | 80 tracks | Double-sided (DS) | Double density (DD) | 768K       | 1024 Bytes  |      |
| D80-DD        | Klaus Kaempf CP/M 2.2x/3.0 Data format            | 80 tracks | Double-sided (DS) | Double density (DD) | 800K       | 1024 Bytes  |      |
| TV802         | Televideo 802 format                             | 40 tracks | Double-sided (DS) | Double density (DD) | 342K       | 256 Bytes   |
| TRS80CPM      | TRS-80 Model I/III/4/4P CP/M format               | 40 tracks | Single-sided (SS) | Double density (DD) | 180K       | 512 Bytes   |      |
| TRS80-LB      | TRS-80 Model II Lifeboat format                   | 77 tracks | Single-sided (SS) | Double density (DD) | 600K       | 1024 Bytes  | 3    |
| TRS80-FMG     | TRS-80 Model II FMG format                        | 77 tracks | Single-sided (SS) | Double density (DD) | 486K       | 256 Bytes   |      |
| TRS80-PT      | TRS-80 Model II/12/16 Pickles & Trout format      | 77 tracks | Single-sided (SS) | Double density (DD) | 600K       | 512 Bytes   |      |
| VIS1050       | Visual 1050 format                               | 80 tracks | Single-sided (SS) | Double density (DD) | 390K       | 512 Bytes   |      |
| VORTEX        | Amstrad CPC Vortex format                         | 80 tracks | Double-sided (DS) | Double density (DD) | 712K       | 512 Bytes   |      |
| XEROX820I     | Xerox 820 format                                 | 40 tracks | Single-sided (SS) | Single density (SD) | 82K        | 128 Bytes   | 5    |
| XER-820II     | Xerox 820-II format                              | 40 tracks | Single-sided (SS) | Double density (DD) | 164K       | 256 Bytes   | 5    |
| Z-100         | Zenith Z-100/Heath H-100 format                   | 40 tracks | Double-sided (DS) | Double density (DD) | 320K       | 512 Bytes   |      |
| ZORBA         | Zorba format                                     | 40 tracks | Double-sided (DS) | Double density (DD) | 390K       | 512 Bytes   |      |
| ALPHA-P2      | Triumph Adler alphaTronic P2 format               | 40 tracks | Single-sided (SS) | Double density (DD) | 320K       | 256 Bytes   |      |
| ALSPA         | Alspa format                                    | 77 tracks | Single-sided (SS) | Double density (DD) | 600K       | 1024 Bytes  |      |
| AMPRO         | Ampro Little Board Z80 format                    | 40 tracks | Single-sided (SS) | Double density (DD) | 320K       | 256 Bytes   |      |
| HEATH         | Heath H89, Magnolia CP/M format                   | 40 tracks | Single-sided (SS) | Double density (DD) | 166K       | 512 Bytes   |      |
| JOYCE         | Amstrad PCW 8256 "Joyce" format                   | 40 tracks | Single-sided (SS) | Double density (DD) | 175K       | 512 Bytes   |      |
| MOLE-S9       | Molecular Series 9 format                        | 40 tracks | Double-sided (DS) | Double density (DD) | 342K       | 512 Bytes   |      |
| PERTEC        | Pertec PCC-2000 format                           | 77 tracks | Single-sided (SS) | Double density (DD) | 480K       | 256 Bytes   | 5    |
| SISPHUS       | Sisyphus format                                  | 77 tracks | Single-sided (SS) | Double density (DD) | 450K       | 128 Bytes   |      |
| VIXEN         | Osborne Vixen format                            | 40 tracks | Double-sided (DS) | Double density (DD) | 390K       | 1024 Bytes  | 2    |


## Drop a Star ⭐

If you like this project then drop a Github star by pressing the Star button ⭐
