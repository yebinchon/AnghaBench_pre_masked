
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_fast64_t ;
typedef scalar_t__ uint_fast32_t ;
typedef int stream_t ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ i_buffer; } ;
typedef TYPE_1__ block_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(stream_t *VAR_2, uint_fast32_t (*VAR_3)(stream_t *),
                    block_t **VAR_4, unsigned *VAR_5)
{
    uint_fast64_t VAR_6 = FUNC_6(VAR_2);
    uint_fast32_t VAR_7 = VAR_3(VAR_2);
    if(VAR_7> 0)
    {

        ssize_t VAR_8;
        if(*VAR_5 < VAR_0 && VAR_7 <= VAR_1)
        {
            *VAR_4 = FUNC_3(VAR_2, VAR_7);
            VAR_8 = *VAR_4 ? (ssize_t)(*VAR_4)->i_buffer : -1;
        }
        else
        {
            VAR_8 = FUNC_4(VAR_2, ((void*)0), VAR_7);
        }

        if(VAR_8 < (ssize_t)VAR_7)
        {
            FUNC_0(*VAR_4);
            *VAR_4 = ((void*)0);
            if (FUNC_2(VAR_8 < 0))
            {
                if (FUNC_5(VAR_2, VAR_6))
                    FUNC_1(VAR_2, "seek failure");
                return 0;
            }
        }
        else (*VAR_5)++;
    }
    return VAR_7 != 0;
}
