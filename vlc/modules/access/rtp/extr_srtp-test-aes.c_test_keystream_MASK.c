
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;
typedef int uint32_t ;
typedef int key ;
typedef int good_start ;
typedef int good_end ;
typedef int gcry_cipher_hd_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,char const*,int) ;
 int const FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char const*,char const*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int const*,char const*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_13 (void)
{
    static const uint8_t VAR_3[16] =
        "\x2B\x7E\x15\x16\x28\xAE\xD2\xA6\xAB\xF7\x15\x88\x09\xCF\x4F\x3C";
    const uint32_t VAR_4[4]=
        { FUNC_7 (0xf0f1f2f3), FUNC_7 (0xf4f5f6f7),
          FUNC_7 (0xf8f9fafb), FUNC_7 (0xfcfd0000) };

    FUNC_11 ("AES-CM key stream test...");
    uint8_t *VAR_5 = FUNC_0 (0xff02, 16);
    if (VAR_5 == ((void*)0))
    {
        FUNC_2 ("Not enough memory for test\n", VAR_2);
        return;
    }

    FUNC_9 (" session key: ");
    FUNC_10 (VAR_3, sizeof (VAR_3));

    gcry_cipher_hd_t VAR_6;
    if (FUNC_5 (&VAR_6, VAR_0, VAR_1, 0))
        FUNC_1 ("Cipher initialization error");
    if (FUNC_6 (VAR_6, VAR_3, sizeof (VAR_3)))
        FUNC_1 ("Cipher key error");

    if (FUNC_12 (VAR_6, 0, 0, 0, VAR_4, VAR_5, 0xff020))
        FUNC_1 ("Encryption failure");
    FUNC_4 (VAR_6);

    static const uint8_t VAR_7[48] =
        "\xE0\x3E\xAD\x09\x35\xC9\x5E\x80\xE1\x66\xB1\x6D\xD9\x2B\x4E\xB4"
        "\xD2\x35\x13\x16\x2B\x02\xD0\xF7\x2A\x43\xA2\xFE\x4A\x5F\x97\xAB"
        "\x41\xE9\x5B\x3B\xB0\xA2\xE8\xDD\x47\x79\x01\xE4\xFC\xA8\x94\xC0";
    static const uint8_t VAR_8[48] =
        "\xEC\x8C\xDF\x73\x98\x60\x7C\xB0\xF2\xD2\x16\x75\xEA\x9E\xA1\xE4"
        "\x36\x2B\x7C\x3C\x67\x73\x51\x63\x18\xA0\x77\xD7\xFC\x50\x73\xAE"
        "\x6A\x2C\xC3\x78\x78\x89\x37\x4F\xBE\xB4\xC8\x1B\x17\xBA\x6C\x44";

    FUNC_9 (" key stream:  ");
    FUNC_10 (VAR_5, sizeof (VAR_7));
    FUNC_9 (" ... cont'd : ");
    FUNC_10 (VAR_5 + 0xff020 - sizeof (VAR_8), sizeof (VAR_8));
    if (FUNC_8 (VAR_5, VAR_7, sizeof (VAR_7))
     || FUNC_8 (VAR_5 + 0xff020 - sizeof (VAR_8), VAR_8,
                sizeof (VAR_8)))
        FUNC_1 ("Key stream test failed");
    FUNC_3 (VAR_5);
}
