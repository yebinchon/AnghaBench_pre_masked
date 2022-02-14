
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;
typedef int salt ;
typedef int r ;
typedef int key ;
typedef int gcry_cipher_hd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char const*,char const*,int,int ,char const*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char const*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9 (void)
{
    static const uint8_t VAR_5[16] =
        "\xE1\xF9\x7A\x0D\x3E\x01\x8B\xE0\xD6\x4F\xA3\x2C\x06\xDE\x41\x39";
    static const uint8_t VAR_6[14] =
        "\x0E\xC6\x75\xAD\x49\x8A\xFE\xEB\xB6\x96\x0B\x3A\xAB\xE6";

    static const uint8_t VAR_7[16] =
        "\xC6\x1E\x7A\x93\x74\x4F\x39\xEE\x10\x73\x4A\xFE\x3F\xF7\xA0\x87";
    static const uint8_t VAR_8[14] =
        "\x30\xCB\xBC\x08\x86\x3D\x8C\x85\xD4\x9D\xB3\x4A\x9A\xE1";
    static const uint8_t VAR_9[94] =
        "\xCE\xBE\x32\x1F\x6F\xF7\x71\x6B\x6F\xD4\xAB\x49\xAF\x25\x6A\x15"
        "\x6D\x38\xBA\xA4\x8F\x0A\x0A\xCF\x3C\x34\xE2\x35\x9E\x6C\xDB\xCE"
        "\xE0\x49\x64\x6C\x43\xD9\x32\x7A\xD1\x75\x57\x8E\xF7\x22\x70\x98"
        "\x63\x71\xC1\x0C\x9A\x36\x9A\xC2\xF9\x4A\x8C\x5F\xBC\xDD\xDC\x25"
        "\x6D\x6E\x91\x9A\x48\xB6\x10\xEF\x17\xC2\x04\x1E\x47\x40\x35\x76"
        "\x6B\x68\x64\x2C\x59\xBB\xFC\x2F\x34\xDB\x60\xDB\xDF\xB2";

    static const uint8_t VAR_10[6] = { 0, 0, 0, 0, 0, 0 };
    gcry_cipher_hd_t VAR_11;
    uint8_t VAR_12[94];

    FUNC_8 ("AES-CM key derivation test...");
    FUNC_6 (" master key:  ");
    FUNC_7 (VAR_5, sizeof (VAR_5));
    FUNC_6 (" master salt: ");
    FUNC_7 (VAR_6, sizeof (VAR_6));

    if (FUNC_3 (&VAR_11, VAR_0, VAR_1, 0)
     || FUNC_4 (VAR_11, VAR_5, sizeof (VAR_5)))
        FUNC_1 ("Internal PRF error");

    if (FUNC_0 (VAR_11, VAR_6, VAR_10, sizeof (VAR_10), VAR_3, VAR_12, 16))
        FUNC_1 ("Internal cipher derivation error");
    FUNC_6 (" cipher key:  ");
    FUNC_7 (VAR_12, 16);
    if (FUNC_5 (VAR_12, VAR_7, 16))
        FUNC_1 ("Test failed");

    if (FUNC_0 (VAR_11, VAR_6, VAR_10, sizeof (VAR_10), VAR_4, VAR_12, 14))
        FUNC_1 ("Internal salt derivation error");
    FUNC_6 (" cipher salt: ");
    FUNC_7 (VAR_12, 14);
    if (FUNC_5 (VAR_12, VAR_8, 14))
        FUNC_1 ("Test failed");

    if (FUNC_0 (VAR_11, VAR_6, VAR_10, sizeof (VAR_10), VAR_2, VAR_12, 94))
        FUNC_1 ("Internal auth key derivation error");
    FUNC_6 (" auth key:    ");
    FUNC_7 (VAR_12, 94);
    if (FUNC_5 (VAR_12, VAR_9, 94))
        FUNC_1 ("Test failed");

    FUNC_2 (VAR_11);
}
