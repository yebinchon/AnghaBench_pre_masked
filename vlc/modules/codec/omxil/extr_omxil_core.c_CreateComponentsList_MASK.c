
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {char const* psz_role; char const* psz_name; } ;
typedef char OMX_U8 ;
typedef int OMX_U32 ;
typedef int OMX_ERRORTYPE ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int,unsigned int) ;
 int FUNC_4 (char*,int*,char**) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(vlc_object_t *VAR_4, const char *VAR_5,
                         char VAR_6[VAR_0][VAR_2])
{
    char VAR_7[VAR_2];
    OMX_ERRORTYPE VAR_8;
    OMX_U32 VAR_9 = 0;
    OMX_U8 **VAR_10 = 0;
    unsigned int VAR_11, VAR_12, VAR_13 = 0;

    if(!VAR_5) goto end;

    for( VAR_11 = 0; ; VAR_11++ )
    {
        bool VAR_14 = 0;

        VAR_8 = FUNC_3(VAR_7, VAR_2, VAR_11);
        if(VAR_8 != VAR_1) break;

        FUNC_2(VAR_4, "component %s", VAR_7);

        for( unsigned int VAR_15 = 0; VAR_3[VAR_15].psz_role; VAR_15++ ) {
            if( !FUNC_5( VAR_5, VAR_3[VAR_15].psz_role ) &&
                !FUNC_5( VAR_7, VAR_3[VAR_15].psz_name ) ) {
                goto found;
            }
        }

        VAR_8 = FUNC_4(VAR_7, &VAR_9, 0);
        if(VAR_8 != VAR_1 || !VAR_9) continue;

        VAR_10 = FUNC_1(VAR_9 * (sizeof(OMX_U8*) + VAR_2));
        if(!VAR_10) continue;

        for( VAR_12 = 0; VAR_12 < VAR_9; VAR_12++ )
            VAR_10[VAR_12] = ((OMX_U8 *)(&VAR_10[VAR_9])) +
                VAR_12 * VAR_2;

        VAR_8 = FUNC_4(VAR_7, &VAR_9, VAR_10);
        if(VAR_8 != VAR_1) VAR_9 = 0;

        for(VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        {
            FUNC_2(VAR_4, "  - role: %s", VAR_10[VAR_12]);
            if(!FUNC_5((char *)VAR_10[VAR_12], VAR_5)) VAR_14 = 1;
        }

        FUNC_0(VAR_10);

        if(!VAR_14) continue;

found:
        if(VAR_13 >= VAR_0)
        {
            FUNC_2(VAR_4, "too many matching components");
            continue;
        }

        FUNC_6(VAR_6[VAR_13], VAR_7,
                VAR_2-1);
        VAR_13++;
    }

 end:
    FUNC_2(VAR_4, "found %i matching components for role %s",
            VAR_13, VAR_5);
    for( VAR_11 = 0; VAR_11 < VAR_13; VAR_11++ )
        FUNC_2(VAR_4, "- %s", VAR_6[VAR_11]);

    return VAR_13;
}
