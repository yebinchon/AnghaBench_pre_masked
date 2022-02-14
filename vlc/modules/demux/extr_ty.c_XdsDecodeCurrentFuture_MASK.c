
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int psz_rating; int rating; int psz_name; } ;
struct TYPE_8__ {TYPE_4__ current; TYPE_4__ future; } ;
struct TYPE_9__ {int i_type; TYPE_1__ meta; scalar_t__ b_future; } ;
typedef TYPE_2__ xds_t ;
struct TYPE_10__ {int* p_data; int i_data; } ;
typedef TYPE_3__ xds_packet_t ;
typedef TYPE_4__ xds_meta_program_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,char const*) ;
 int FUNC_1 (char*,int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4( xds_t *VAR_4, xds_packet_t *VAR_5 )
{
    xds_meta_program_t *VAR_6 = VAR_4->b_future ? &VAR_4->meta.future : &VAR_4->meta.current;
    char VAR_7[2*32+1];
    int VAR_8;

    switch( VAR_4->i_type )
    {
    case 0x03:
        FUNC_1( VAR_7, VAR_5->p_data, VAR_5->i_data );
        if( FUNC_0( VAR_4, &VAR_6->psz_name, VAR_7 ) )
        {


        }
        break;
    case 0x05:
        VAR_8 = (VAR_5->p_data[0] & 0x18);
        if( VAR_8 == 0x08 )
        {

            static const char *VAR_9[8][2] = {
                { "None", "No rating (no content advisory)" },
                { "TV-Y", "All Children (no content advisory)" },
                { "TV-Y7", "Directed to Older Children (V = Fantasy Violence)" },
                { "TV-G", "General Audience (no content advisory)" },
                { "TV-PG", "Parental Guidance Suggested" },
                { "TV-14", "Parents Strongly Cautioned" },
                { "TV-MA", "Mature Audience Only" },
                { "None", "No rating (no content advisory)" }
            };
            VAR_6->rating = VAR_2;
            if( FUNC_0( VAR_4, &VAR_6->psz_rating, VAR_9[VAR_5->p_data[1]&0x07][0] ) )
            {



            }
        }
        else if( VAR_8 == 0x00 || VAR_8 == 0x10 )
        {

            static const char *VAR_10[8][2] = {
                { "N/A", "N/A" },
                { "G", "General Audiences" },
                { "PG", "Parental Guidance Suggested" },
                { "PG-13", "Parents Strongly Cautioned" },
                { "R", "Restricted" },
                { "NC-17", "No one 17 and under admitted" },
                { "X", "No one under 17 admitted" },
                { "NR", "Not Rated" },
            };
            VAR_6->rating = VAR_0;
            if( FUNC_0( VAR_4, &VAR_6->psz_rating, VAR_10[VAR_5->p_data[0]&0x07][0] ) )
            {



            }
        }
        else
        {

            FUNC_2( VAR_8 == 0x18 );
            VAR_6->rating = VAR_1;
            if( FUNC_0( VAR_4, &VAR_6->psz_rating, ((void*)0) ) )
            {


            }
        }
        break;

    default:



        break;
    }
}
