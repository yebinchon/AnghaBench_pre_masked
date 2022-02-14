
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filter_t ;


 int FUNC_0 (double*,double*,double*) ;
 int FUNC_1 (int *,char*,...) ;
 double FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3( filter_t *VAR_0, int VAR_1, int *VAR_2 )
{
    double VAR_3[9] =
        { 76.24500, 149.68500, 29.07000,
          -43.02765, -84.47235, 127.50000,
          127.50000, -106.76534, -20.73466 };
    double VAR_4[9] =
        { 257.00392, 0.00000, 360.31950,
          257.00392, -88.44438, -183.53583,
          257.00392, 455.41095, 0.00000 };
    double VAR_5 = ((double)(( 0xFF0000 & VAR_1 )>>16))/255.;
    double VAR_6 = ((double)(( 0x00FF00 & VAR_1 )>>8))/255.;
    double VAR_7 = ((double)( 0x0000FF & VAR_1 ))/255.;
    double VAR_8 = FUNC_2( VAR_5*VAR_5 + VAR_6*VAR_6 + VAR_7*VAR_7 );
    if( VAR_8 > 0 )
    {
        VAR_5 /= VAR_8;
        VAR_6 /= VAR_8;
        VAR_7 /= VAR_8;
    }

    double VAR_9[9] =
        { VAR_5*VAR_5, VAR_5*VAR_6, VAR_5*VAR_7,
          VAR_5*VAR_6, VAR_6*VAR_6, VAR_6*VAR_7,
          VAR_5*VAR_7, VAR_6*VAR_7, VAR_7*VAR_7 };
    double VAR_10[9];
    double VAR_11[9];
    FUNC_1( VAR_0, "red: %f", VAR_5 );
    FUNC_1( VAR_0, "green: %f", VAR_6 );
    FUNC_1( VAR_0, "blue: %f", VAR_7 );
    FUNC_0( VAR_10, VAR_9, VAR_4 );
    FUNC_0( VAR_11, VAR_3, VAR_10 );
    for( int VAR_12 = 0; VAR_12 < 9; VAR_12++ )
    {
        VAR_2[VAR_12] = (int)VAR_11[VAR_12];
    }
    FUNC_1( VAR_0, "Projection matrix:" );
    FUNC_1( VAR_0, "%6d %6d %6d", VAR_2[0], VAR_2[1], VAR_2[2] );
    FUNC_1( VAR_0, "%6d %6d %6d", VAR_2[3], VAR_2[4], VAR_2[5] );
    FUNC_1( VAR_0, "%6d %6d %6d", VAR_2[6], VAR_2[7], VAR_2[8] );
}
