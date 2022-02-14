
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {char const* psz_name; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_6__ {scalar_t__ i_type; } ;
typedef TYPE_2__ input_item_slave_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static uint8_t FUNC_7(input_item_t *VAR_5,
                                      input_item_slave_t *VAR_6,
                                      const char *VAR_7)
{
    uint8_t VAR_8 = VAR_2;
    char *VAR_9 = FUNC_1(VAR_5->psz_name);
    char *VAR_10 = FUNC_1(VAR_7);

    if (!VAR_9 || !VAR_10)
        goto done;

    size_t VAR_11 = FUNC_4(VAR_9);
    size_t VAR_12 = FUNC_4(VAR_10);


    if (VAR_11 > VAR_12 || VAR_12 > 2 * VAR_11)
        goto done;


    if (!FUNC_3(VAR_9, VAR_10))
    {
        VAR_8 = VAR_0;
        goto done;
    }


    if (VAR_6->i_type == VAR_4)
    {
        char *VAR_13 = FUNC_5(VAR_10, '.');
        if (VAR_13 != ((void*)0) && FUNC_2(++VAR_13, "cdg") == 0)
            goto done;
    }


    const char *VAR_14 = FUNC_6(VAR_10, VAR_9);

    if (VAR_14)
    {

        if (FUNC_4(VAR_14 + FUNC_4(VAR_9)) == 0)
        {
            VAR_8 = VAR_3;
            goto done;
        }
        else
        {
            VAR_8 = VAR_1;
            goto done;
        }
    }

done:
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    return VAR_8;
}
