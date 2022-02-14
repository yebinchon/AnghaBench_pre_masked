
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int digest_algo; int * issuer_longid; int const* hash_verification; } ;
typedef TYPE_1__ signature_packet_t ;
struct TYPE_10__ {char* psz_username; int* longid; int key; TYPE_1__ sig; } ;
typedef TYPE_2__ public_key_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*,char*,int,int,int,int,int,int,int,int) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int const*,int) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void FUNC_7(public_key_t *VAR_1, public_key_t *VAR_2, const char *VAR_3,
    signature_packet_t *VAR_4, const uint8_t *VAR_5, const uint8_t *VAR_6)
{
    uint8_t *VAR_7;
    const char *VAR_8;

    if (VAR_3) {
        VAR_7 = FUNC_4(VAR_3, VAR_4);
        VAR_8 = "text";
    } else {
        VAR_7 = FUNC_3(VAR_1);
        VAR_8 = "public key";
    }

    FUNC_0(*VAR_7);


    FUNC_0(!FUNC_5(VAR_7, VAR_4->hash_verification, 2));

    if (FUNC_5(VAR_4->issuer_longid, VAR_5, 8)) {
        FUNC_0(VAR_2 && VAR_6);
        FUNC_7(VAR_1, ((void*)0), ((void*)0), &VAR_1->sig, VAR_5, ((void*)0));
        VAR_1 = VAR_2;
    }

    FUNC_0(!FUNC_6(VAR_4, &VAR_1->key, VAR_7));

    FUNC_1(VAR_0, "Good %s %s signature from %s (%.2X%.2X%.2X%.2X%.2X%.2X%.2X%.2X)\n",
            VAR_8, FUNC_2(VAR_4->digest_algo), VAR_1->psz_username,
            VAR_1->longid[0], VAR_1->longid[1], VAR_1->longid[2], VAR_1->longid[3],
            VAR_1->longid[4], VAR_1->longid[5], VAR_1->longid[6], VAR_1->longid[7]
            );
}
