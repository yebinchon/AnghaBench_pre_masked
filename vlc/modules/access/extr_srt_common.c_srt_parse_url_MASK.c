
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parsed_param {char* val; int key; } ;
struct TYPE_3__ {int latency; char* passphrase; int key_length; int payload_size; int bandwidth_overhead_limit; } ;
typedef TYPE_1__ srt_params_t ;
typedef int local_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int* VAR_5 ;
 int FUNC_2 (char*,char*,struct parsed_param*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool FUNC_4(char* VAR_6, srt_params_t* VAR_7)
{
    char* VAR_8 = ((void*)0);
    struct parsed_param VAR_9[32];
    int VAR_10 = 0;
    int VAR_11 = 0;
    bool VAR_12 = 0;

    if (!VAR_6 || !VAR_6[0] || !VAR_7)
        return 0;


    VAR_7->latency = -1;
    VAR_7->passphrase = ((void*)0);
    VAR_7->key_length = -1;
    VAR_7->payload_size = -1;
    VAR_7->bandwidth_overhead_limit = -1;


    VAR_8 = FUNC_1( VAR_6, '?' );
    if (VAR_8) {
        VAR_10 = FUNC_2( VAR_8, "&", VAR_9,
                sizeof(VAR_9) / sizeof(struct parsed_param) );
        if (VAR_10 > 0) {
            VAR_12 = 1;
            for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11) {
                char* VAR_13 = VAR_9[VAR_11].val;
                if (!VAR_13)
                    continue;

                if (FUNC_3( VAR_9[VAR_11].key, VAR_2 ) == 0) {
                    int VAR_14 = FUNC_0( VAR_13 );
                    if (VAR_14 >= 0)
                        VAR_7->latency = VAR_14;
                } else if (FUNC_3( VAR_9[VAR_11].key, VAR_3 )
                        == 0) {
                    VAR_7->passphrase = VAR_13;
                } else if (FUNC_3( VAR_9[VAR_11].key, VAR_4 )
                        == 0) {
                    int VAR_15 = FUNC_0( VAR_13 );
                    if (VAR_15 >= 0)
                        VAR_7->payload_size = VAR_15;
                } else if (FUNC_3( VAR_9[VAR_11].key, VAR_1 )
                        == 0) {
                    int VAR_16 = FUNC_0( VAR_13 );
                    if (VAR_16 == VAR_5[0] || VAR_16 == VAR_5[1]
                            || VAR_16 == VAR_5[2]) {
                        VAR_7->key_length = VAR_16;
                    }
                } else if (FUNC_3( VAR_9[VAR_11].key,
                VAR_0 ) == 0) {
                    int VAR_17 = FUNC_0( VAR_13 );
                    if (VAR_17 >= 0)
                        VAR_7->bandwidth_overhead_limit = VAR_17;

                }
            }
        }
    }

    return VAR_12;
}
