
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ag_compression_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,unsigned char const*,int) ;

ag_compression_type FUNC_2(const void *VAR_7, const int VAR_8) {
    const unsigned char *VAR_9 = VAR_7;

    if (VAR_8 == 0)
        return VAR_2;


    if (VAR_8 >= 2) {
        if (VAR_9[0] == 0x1F) {
            if (VAR_9[1] == 0x8B) {




            } else if (VAR_9[1] == 0x9B) {
                FUNC_0("Found compress-based stream");
                return VAR_0;
            }
        }
    }


    if (VAR_8 >= 4) {
        if (VAR_9[0] == 0x50 && VAR_9[1] == 0x4B && VAR_9[2] == 0x03 && VAR_9[3] == 0x04) {
            FUNC_0("Found zip-based stream");
            return VAR_4;
        }
    }
    return VAR_2;
}
