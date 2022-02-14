
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_4__ {int type; int encoding; int bzip2; int gzip; int xz; } ;
typedef int ImportCompressType ;
typedef TYPE_1__ ImportCompress ;


 int FUNC_0 (int *,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,int,int,int ) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(ImportCompress *VAR_10, ImportCompressType VAR_11) {
        int VAR_12;

        FUNC_1(VAR_10);

        switch (VAR_11) {

        case 128: {
                lzma_ret VAR_13;

                VAR_13 = FUNC_3(&VAR_10->xz, VAR_5, VAR_3);
                if (VAR_13 != VAR_4)
                        return -VAR_1;

                VAR_10->type = 128;
                break;
        }

        case 130:
                VAR_12 = FUNC_2(&VAR_10->gzip, VAR_6, VAR_8, 15 + 16, 8, VAR_7);
                if (VAR_12 != VAR_9)
                        return -VAR_1;

                VAR_10->type = 130;
                break;
        case 129:
                VAR_10->type = 129;
                break;

        default:
                return -VAR_2;
        }

        VAR_10->encoding = 1;
        return 0;
}
