
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct stat {int st_mode; } ;
typedef int peek ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,scalar_t__*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*,int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_5)
{
    struct stat VAR_6;
    uint8_t VAR_7[2048];
    unsigned VAR_8;
    int VAR_9 = VAR_3;
    int VAR_10;

    VAR_10 = FUNC_7(VAR_5, VAR_1 | VAR_0);
    if (VAR_10 == -1) {
        return VAR_3;
    }

    if (FUNC_3(VAR_10, &VAR_6) == -1) {
        goto bailout;
    }
    if (!FUNC_1(VAR_6.st_mode) && !FUNC_0(VAR_6.st_mode)) {
        goto bailout;
    }


    if (FUNC_5(VAR_10, VAR_7, sizeof(VAR_7)) != sizeof(VAR_7)) {
        goto bailout;
    }
    for (VAR_8 = 0; VAR_8 < sizeof(VAR_7); VAR_8++) {
        if (VAR_7[ VAR_8 ]) {
            goto bailout;
        }
    }


    if (FUNC_4(VAR_10, 256 * 2048, VAR_2) == -1 ||
        FUNC_5(VAR_10, VAR_7, 16) != 16 ||
        FUNC_2(VAR_7) != 2) {
        goto bailout;
    }

    VAR_9 = VAR_4;

bailout:
    FUNC_6(VAR_10);
    return VAR_9;
}
