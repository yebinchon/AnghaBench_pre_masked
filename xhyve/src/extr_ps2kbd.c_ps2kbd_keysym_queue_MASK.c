
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ps2kbd_softc {int dummy; } ;


 int FUNC_0 (struct ps2kbd_softc*,int const) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ps2kbd_softc *VAR_1,
    int VAR_2, uint32_t VAR_3)
{

 const uint8_t VAR_4[128] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x16, 0x52, 0x26, 0x25, 0x2e, 0x3d, 0x52,
  0x46, 0x45, 0x3e, 0x55, 0x41, 0x4e, 0x49, 0x4a,
  0x45, 0x16, 0x1e, 0x26, 0x25, 0x2e, 0x36, 0x3d,
  0x3e, 0x46, 0x4c, 0x4c, 0x41, 0x55, 0x49, 0x4a,
  0x1e, 0x1c, 0x32, 0x21, 0x23, 0x24, 0x2b, 0x34,
  0x33, 0x43, 0x3b, 0x42, 0x4b, 0x3a, 0x31, 0x44,
  0x4d, 0x15, 0x2d, 0x1b, 0x2c, 0x3c, 0x2a, 0x1d,
  0x22, 0x35, 0x1a, 0x54, 0x5d, 0x5b, 0x36, 0x4e,
  0x0e, 0x1c, 0x32, 0x21, 0x23, 0x24, 0x2b, 0x34,
  0x33, 0x43, 0x3b, 0x42, 0x4b, 0x3a, 0x31, 0x44,
  0x4d, 0x15, 0x2d, 0x1b, 0x2c, 0x3c, 0x2a, 0x1d,
  0x22, 0x35, 0x1a, 0x54, 0x5d, 0x5b, 0x0e, 0x00,
 };

    if (VAR_3 <= 0x7f) {
        if (!VAR_2)
            FUNC_0(VAR_1, 0xf0);
        FUNC_0(VAR_1, VAR_4[VAR_3]);
    } else {
        switch (VAR_3) {
        case 0xff08:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x66);
            break;
        case 0xff09:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x0d);
            break;
        case 0xff0d:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x5a);
            break;
        case 0xff1b:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x76);
            break;
        case 0xff50:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x6c);
            break;
        case 0xff51:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x6b);
            break;
        case 0xff52:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x75);
            break;
        case 0xff53:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x74);
            break;
        case 0xff54:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x72);
            break;
        case 0xff55:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x7d);
            break;
        case 0xff56:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x7a);
            break;
        case 0xff57:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x69);
            break;
        case 0xff63:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x70);
            break;
        case 0xff8d:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x5a);
            break;
        case 0xffe1:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x12);
            break;
        case 0xffe2:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x59);
            break;
        case 0xffe3:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x14);
            break;
        case 0xffe4:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x14);
            break;
        case 0xffe7:

            break;
        case 0xffe8:

            break;
        case 0xffe9:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x11);
            break;
        case 0xfe03:
        case 0xffea:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x11);
            break;
        case 0xffeb:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x1f);
            break;
        case 0xffec:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x27);
            break;
        case 0xffbe:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x05);
            break;
        case 0xffbf:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x06);
            break;
        case 0xffc0:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x04);
            break;
        case 0xffc1:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x0C);
            break;
        case 0xffc2:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x03);
            break;
        case 0xffc3:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x0B);
            break;
        case 0xffc4:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x83);
            break;
        case 0xffc5:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x0A);
            break;
        case 0xffc6:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x01);
            break;
        case 0xffc7:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x09);
            break;
        case 0xffc8:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x78);
            break;
        case 0xffc9:
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x07);
            break;
        case 0xffff:
            FUNC_0(VAR_1, 0xe0);
            if (!VAR_2)
                FUNC_0(VAR_1, 0xf0);
            FUNC_0(VAR_1, 0x71);
            break;
        default:
            FUNC_1(VAR_0, "Unhandled ps2 keyboard keysym 0x%x\n",
                 VAR_3);
            break;
        }
    }
}
