
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pagesize; int reservedBytes; int * codec; } ;
typedef TYPE_1__ sqliterk_pager ;
typedef int sqliterk_file ;
struct TYPE_6__ {int kdf_iter; int use_hmac; int page_size; scalar_t__ kdf_salt; int key_len; int key; } ;
typedef TYPE_2__ sqliterk_cipher_conf ;
typedef int codec_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int*,int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int *,int ,unsigned char*,size_t*) ;

int FUNC_14(sqliterk_pager *VAR_4,
                            sqliterk_file *VAR_5,
                            const sqliterk_cipher_conf *VAR_6)
{
    codec_ctx *VAR_7 = ((void*)0);
    int VAR_8;

    if (VAR_6) {

        if (!VAR_6->key || VAR_6->key_len <= 0)
            return VAR_1;



        FUNC_11();
        FUNC_0();



        int VAR_9[8];


        VAR_8 = FUNC_4(&VAR_7, VAR_9, ((void*)0), VAR_6->key, VAR_6->key_len);
        if (VAR_8 != VAR_3)
            goto bail_sqlite_errstr;


        unsigned char *VAR_10;
        unsigned char VAR_11[16];
        if (VAR_6->kdf_salt) {
            VAR_10 = (unsigned char *) VAR_6->kdf_salt;
        } else {
            size_t VAR_12 = 16;
            VAR_8 = FUNC_13(VAR_5, 0, VAR_11, &VAR_12);
            if (VAR_8 != VAR_2) {
                FUNC_12(VAR_8, "Failed to load KDF salt from file.");
                goto bail;
            }
            VAR_10 = VAR_11;
        }
        FUNC_6(VAR_7, VAR_10, 16);


        if (VAR_6->page_size > 0) {
            VAR_8 = FUNC_7(VAR_7, VAR_6->page_size);
            if (VAR_8 != VAR_3)
                goto bail_sqlite_errstr;
        }


        if (VAR_6->use_hmac >= 0) {
            VAR_8 = FUNC_8(VAR_7, VAR_6->use_hmac);
            if (VAR_8 != VAR_3)
                goto bail_sqlite_errstr;
        }


        if (VAR_6->kdf_iter > 0) {
            VAR_8 = FUNC_5(VAR_7, VAR_6->kdf_iter);
            if (VAR_8 != VAR_3)
                goto bail;
        }


        int VAR_13 = FUNC_2(VAR_7);
        int VAR_14 = FUNC_3(VAR_7);

        VAR_4->pagesize = VAR_13;
        VAR_4->reservedBytes = VAR_14;
    }

    if (VAR_4->codec) {
        FUNC_1(&VAR_4->codec);
        FUNC_9();
    }

    VAR_4->codec = VAR_7;
    return VAR_2;

bail_sqlite_errstr:
    FUNC_12(VAR_0,
                    "Failed to initialize cipher context: %s",
                    FUNC_10(VAR_8));
    VAR_8 = VAR_0;
bail:
    if (VAR_7)
        FUNC_1(&VAR_7);
    FUNC_9();
    return VAR_8;
}
