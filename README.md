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

The output of the possible disk formats was truncated in 'foreign' after one line. In Holte CP/M, there is a 'screen control code' ESC X that enables 'automatic line break' and displays all entries

- 05/17/2023: Added functionality to automatically enable 'automatic line break' using the screen control code ESC X, allowing all entries to be displayed in the 'foreign' output.Implemented the option to turn off 'automatic line break' after displaying the list. Updated the length back to 10 characters for a more organized and visually appealing listing.
- 7/14/2023: major change and fix to support different work environments:
  The default DMA address for transient programs is 0080H. The CCP also initializes this area to contain the command tall of the command line. The first position contains the number of characters in the command line, followed by the command line  characters. The character following the last command tail character is set to binary zero. The command line characters are preceded by a leading blank and are translated to ASCII upper-case. Means, the actual "Command tail" is only located from address 0082h, since the length of the "Command tail" is in 0080h and a space is automatically inserted in 0081h
  That said, with 'Z3PLUS' xtail  equ 0082h and with 'CCP' would be xtail  equ 0080h
  KUDOs to Jens Guenther finding this out and reporting.
  
Referring to the source and look at the source code for more information.

### Formats Supported by 'foreign.com Ver 2.0'

 # List of implemented alien formats

The following table lists the implemented alien formats along with their descriptions:

| Format      | Description                                                   |
|-------------|---------------------------------------------------------------|
| MM-D80      | Montezuma Micro 80T DS DATA (80T, DS, DD, 800K, 512 Bytes)     |
| ALPHA-P3    | Triumph Adler alphaTronic P3 (80T, DS, DD, 790K, 1024 Bytes)   |
| ALPHA-PC    | Triumph Adler alphaTronic PC (40T, DS, DD, 320K, 256 Bytes)    |
| ASTER-3S    | Aster CT-80 System (80T, DS, DD, 780K, 1024 Bytes)            |
| ALTOS       | Altos 5-15 (80T, DS, DD, 768K, 1024 Bytes)                    |
| BOND-12     | Bondwell 12 (80T, DS, DD, 768K, 1024 Bytes)                   |
| CPM-8640    | CP/M-86 v2 (40T, DS, DD, 360K, 512 Bytes)                     |
| CPM-8680    | CP/M-86 v2 (80T, DS, DD, 720K, 512 Bytes)                     |
| ELZET       | Elzet 80 (80T, DS, DD, 768K, 1024 Bytes)                      |
| EXIDY       | Exidy Sorcerer (40T, SS, DD, 196K, 512 Bytes)                  |
| GDOS        | GDOS 2.4 (80T, DS, DD, 768K, 1024 Bytes)                       |
| HOLTE-G3    | Thomas Holte CP/M 2.2c/3.0a (80T, DS, DD, 768K, 512 Bytes)     |
| MS-DOS      | MS-DOS (80T, DS, DD, 720K, 1024 Bytes)                         |
| S80-DD      | Klaus Kaempf CP/M 2.2x/3.0 System (80T, DS, DD, 768K, 1024 Bytes)|
| D80-DD      | Klaus Kaempf CP/M 2.2x/3.0 Data (80T, DS, DD, 800K, 1024 Bytes)|
| KAYPRO-2    | Kaypro II (40T, SS, DD, 196K, 512 Bytes)                       |
| Kaypro-4    | Kaypro 4 & 10 (40T, DS, DD, 392K, 512 Bytes)                    |
| Kontron     | KONTRON PSI 908/9C/98 (77T, DS, DD, 256 Bytes, Skew 3)         |
| EAGLE       | Eagle I/II (80T, SS, DD, 390K, 1024 Bytes, Skew 2)             |
| HOLTEG2S    | Thomas Holte Genie IIs/Speedmaster CP/M 2.2a System (80T, SS, DD, 390K, 512 Bytes)|
| LOBO256     | Lobo Systems 256K (80T, SS, DD, 256K, 512 Bytes)                |
| LOBO512     | Lobo Systems 512K (80T, DS, DD, 512K, 512 Bytes)                |
| LNW-256     | LNW Research lnw256 (40T, SS, DD, 166K, 256 Bytes, Skew 5)      |
| LNW-512     | LNW Research lnw256 (40T, SS, DD, 332K, 512 Bytes, Skew 5)      |
| LOWE-A1     | Lowe Electronics CP/M 2.2a (80T, SS, DD, 346K, 256 Bytes)      |
| LOWE-A2     | Lowe Electronics CP/M 2.2a (80T, DS, DD, 696K, 256 Bytes)      |
| LOWE-B1     | Lowe Electronics CP/M 2.2b (80T, SS, DD, 384K, 256 Bytes, 4K Block)|
| LOWE-B2     | Lowe Electronics CP/M 2.2b (80T, DS, DD, 696K, 256 Bytes, 4K Block)|
| MBC-1200    | Sanyo MBC-1200/1250 (80T, DS, DD, 624K, 256 Bytes, Skew 3)     |
| MBC-1000    | Sanyo MBC-1000/1100 (40T, DS, DD, 312K, 256 Bytes, Skew 3)     |
| MSDOS       | MS-DOS discs                                                  |
| MM-S40      | Montezuma Micro 40T Standard SYSTEM (40T, SS, DD, 170K, 256 Bytes, Skew 2)|
| MM-D40      | Montezuma Micro 40T Standard DATA (40T, SS, DD, 200K, 512 Bytes, Skew 2)|
| MM-S80      | Montezuma Micro 80T DS SYSTEM (80T, DS, DD, 710K, 256 Bytes, Skew 2)|
| Mattes      | not working properly                                          |
| MCCPM       | MCCP/M (80T, DS, DD, 800K, 1024 Bytes)                         |
| MORROW      | Morrow Micro Decision (40T, SS, DD, 190K, 1024 Bytes, Skew 3)  |
| MONROE      | Monroe 1860 (40T, SS, DD, 190K, 1024 Bytes, Skew 3)             |
| MD3         | Morrow Micro Decision MD3 (40T, DS, DD, 390K, 1024 Bytes, Skew 3)|
| NABUPC      | NABU PC (80T, DS, DD, 800K, 1024 Bytes)                         |
| NEC-8800    | NEC PC-8800/8801 (40T, DS, DD, 306K, 256 Bytes)                 |
| NEWDOS80    | Newdos/80 (80T, DS, DD, 800K, 512 Bytes, Skew 2)                |
| PROF#4      | Prof80 (Format IV: 80T, DS, DD, 770K, 512 Bytes, Skew 2)        |
| OMIKRON     | Omikron Basic (80T, DS, DD, 770K, 512 Bytes, Skew 2)            |
| OR512       | Oettle & Reichler (80T, DS, DD, 702K, 512 Bytes, Skew 3)         |
| OR1024      | Oettle & Reichler

## Drop a Star ⭐

If you like this project then drop a Github star by pressing the Star button ⭐
