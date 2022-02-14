
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int i_visible_width; unsigned int i_width; int i_visible_height; unsigned int i_height; double i_sar_den; scalar_t__ i_sar_num; } ;
typedef TYPE_1__ video_format_t ;


 unsigned int FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (float) ;
 int FUNC_2 (int *,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_0,
                                        const video_format_t *VAR_1,
                                        float VAR_2,
                                        unsigned VAR_3,
                                        unsigned VAR_4,
                                        video_format_t *VAR_5 )
{


    unsigned VAR_6 = VAR_1->i_visible_width ? VAR_1->i_visible_width : VAR_1->i_width;
    unsigned VAR_7 = VAR_1->i_visible_height ? VAR_1->i_visible_height : VAR_1->i_height;


    float VAR_8 = 1;
    float VAR_9 = 1;


    float VAR_10 = (double)VAR_1->i_sar_num * VAR_1->i_width /
                             VAR_1->i_sar_den / VAR_1->i_height;

    FUNC_2( VAR_0, "decoder aspect is %f:1", VAR_10 );


    VAR_10 = VAR_10 * VAR_7 / VAR_6;
    FUNC_2( VAR_0, "source pixel aspect is %f:1", VAR_10 );


    if( VAR_5->i_visible_width == 0 && VAR_5->i_visible_height == 0 && VAR_2 )
    {

        float VAR_11;
        unsigned VAR_12;
        unsigned VAR_13 = VAR_6 * VAR_2;

        if( VAR_13 % 16 <= 7 && VAR_13 >= 16 )
            VAR_13 -= VAR_13 % 16;
        else
            VAR_13 += 16 - VAR_13 % 16;

        VAR_11 = (float)( VAR_13 ) / (float) VAR_6;

        VAR_12 = FUNC_0( 16, VAR_7 * (float)VAR_11 );

        VAR_8 = VAR_11;
        VAR_9 = (float) VAR_12 / (float) VAR_7;
    }
    else if( VAR_5->i_visible_width && VAR_5->i_visible_height == 0 )
    {

        VAR_8 = (float)VAR_5->i_visible_width / VAR_6;
        VAR_9 = VAR_8;
    }
    else if( VAR_5->i_visible_width == 0 && VAR_5->i_visible_height )
    {

         VAR_9 = (float)VAR_5->i_visible_height / VAR_7;
         VAR_8 = VAR_9;
     }
     else if( VAR_5->i_visible_width && VAR_5->i_visible_height )
     {

         VAR_8 = (float)VAR_5->i_visible_width / VAR_6;
         VAR_9 = (float)VAR_5->i_visible_height / VAR_7;
     }


     if( VAR_3 && VAR_8 > (float)VAR_3 / VAR_6 )
     {
         VAR_8 = (float)VAR_3 / VAR_6;
     }

     if( VAR_4 && VAR_9 > (float)VAR_4 / VAR_7 )
     {
         VAR_9 = (float)VAR_4 / VAR_7;
     }



     VAR_10 = VAR_10 * VAR_9 / VAR_8;
     FUNC_2( VAR_0, "scaled pixel aspect is %f:1", VAR_10 );






     unsigned VAR_14 = FUNC_1(VAR_8*VAR_6);
     unsigned VAR_15 = FUNC_1(VAR_9*VAR_7);
     unsigned VAR_16 = FUNC_1(VAR_8*VAR_1->i_width);
     unsigned VAR_17 = FUNC_1(VAR_9*VAR_1->i_height);

     if( VAR_14 & 1 ) ++VAR_14;
     if( VAR_15 & 1 ) ++VAR_15;
     if( VAR_16 & 1 ) ++VAR_16;
     if( VAR_17 & 1 ) ++VAR_17;


     VAR_5->i_width = VAR_16;
     VAR_5->i_visible_width = VAR_14;
     VAR_5->i_height = VAR_17;
     VAR_5->i_visible_height = VAR_15;

     FUNC_2( VAR_0, "source %ux%u, destination %ux%u",
                     VAR_6, VAR_7,
                     VAR_14, VAR_15 );
}
