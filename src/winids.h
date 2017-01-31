#ifndef WINIDS_H
#define WINIDS_H

#define IDD_MAINBOX      100
#define IDI_MAINICON     200

/* From MSDN: In the WM_SYSCOMMAND message, the four low-order bits of
 * wParam are used by Windows, and should be masked off, so we shouldn't
 * attempt to store information in them. Hence all these identifiers have
 * the low 4 bits clear. Also, identifiers should < 0xF000. */

#define IDM_OPEN            0x0010
#define IDM_COPY            0x0020
#define IDM_PASTE           0x0030
#define IDM_COPASTE         0x0040
#define IDM_SELALL          0x0050
#define IDM_RESET           0x0060
#define IDM_DEFSIZE         0x0070
#define IDM_DEFSIZE_ZOOM    0x0170
#define IDM_FULLSCREEN      0x0080
#define IDM_FULLSCREEN_ZOOM 0x0180
#define IDM_FLIPSCREEN      0x00A0
#define IDM_OPTIONS         0x00B0
#define IDM_NEW             0x00C0
#define IDM_NEW_MONI        0x00D0
#define IDM_COPYTITLE       0x00E0
#define IDM_SEARCH          0x00F0

#endif
