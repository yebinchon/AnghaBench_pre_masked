
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int psz_line ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {int* i_page; int i_wanted_magazine; int* b_is_subtitle; int i_wanted_page; int* b_erase; scalar_t__** ppsz_lines; int b_ignore_sub_flag; int * pi_active_national_set; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,TYPE_2__*,int,int const*,int) ;
 int FUNC_3 (int const) ;
 int * VAR_8 ;
 scalar_t__ FUNC_4 (char*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,char*,int) ;

__attribute__((used)) static bool FUNC_6( decoder_t *VAR_9, const uint8_t *VAR_10,
                                    int VAR_11 )
{
    decoder_sys_t *VAR_12 = VAR_9->p_sys;

    int VAR_13 = 0;
    char VAR_14[256];

    for ( int VAR_15 = 0; VAR_15 < 6; VAR_15++ )
    {
        VAR_13 |= (0xF & (FUNC_0( FUNC_3(VAR_10[8 + VAR_15]) ) >> 4))
                  << (VAR_15 * 4);
    }




    VAR_12->i_page[VAR_11] = (0xF0 & FUNC_0( FUNC_3(VAR_10[7]) )) |
                              (0x0F & (FUNC_0( FUNC_3(VAR_10[6]) ) >> 4) );

    FUNC_2( VAR_14, sizeof(VAR_14), VAR_12, VAR_11,
                   VAR_10 + 14, 40 - 14 );

    FUNC_1((VAR_9, "mag %d flags %x page %x character set %d subtitles %d %s", VAR_11, VAR_13,
         VAR_12->i_page[VAR_11],
         7 & VAR_13>>21, !!(VAR_13 & VAR_5), VAR_14));

    VAR_12->pi_active_national_set[VAR_11] =
                         VAR_8[7 & (VAR_13 >> 21)];

    int VAR_16 = VAR_5;
    if( !VAR_12->b_ignore_sub_flag && VAR_12->i_wanted_magazine != 0x07 )
        VAR_16 |= VAR_6;

    VAR_12->b_is_subtitle[VAR_11] = !((VAR_13 & VAR_16) != VAR_16);

    FUNC_1(( VAR_9, "FLAGS%s%s%s%s%s%s%s mag_ser %d",
          (VAR_13 & VAR_0) ? " erase" : "",
          (VAR_13 & VAR_4) ? " news" : "",
          (VAR_13 & VAR_5) ? " subtitle" : "",
          (VAR_13 & VAR_6)? " suppressed_head" : "",
          (VAR_13 & VAR_7) ? " update" : "",
          (VAR_13 & VAR_2) ? " interrupt" : "",
          (VAR_13 & VAR_1)? " inhibit" : "",
        !!(VAR_13 & VAR_3) ));

    if ( (VAR_12->i_wanted_page != -1
           && VAR_12->i_page[VAR_11] != VAR_12->i_wanted_page)
           || !VAR_12->b_is_subtitle[VAR_11] )
        return 0;

    VAR_12->b_erase[VAR_11] = !!(VAR_13 & VAR_0);







    if (
         VAR_12->b_erase[VAR_11] )
    {
        FUNC_1((VAR_9, "ERASE !"));

        VAR_12->b_erase[VAR_11] = 0;
        for ( int VAR_17 = 1; VAR_17 < 32; VAR_17++ )
        {
            if ( !VAR_12->ppsz_lines[VAR_17][0] ) continue;

            VAR_12->ppsz_lines[VAR_17][0] = 0;
        }
    }


    if ( FUNC_4(VAR_14, VAR_12->ppsz_lines[0]) )
    {
        FUNC_5( VAR_12->ppsz_lines[0], VAR_14,
                 sizeof(VAR_12->ppsz_lines[0]) - 1);
    }

    return 1;
}
