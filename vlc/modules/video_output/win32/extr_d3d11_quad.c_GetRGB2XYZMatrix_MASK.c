
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {double x; double y; } ;
struct TYPE_7__ {double x; double y; } ;
struct TYPE_6__ {double x; double y; } ;
struct TYPE_5__ {double x; double y; } ;
struct cie1931_primaries {TYPE_4__ white; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 size_t VAR_0 ;
 int FUNC_0 (double*,double*,double*) ;
 int FUNC_1 (double*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_2(const struct cie1931_primaries *VAR_3,
                             double VAR_4[3 * 3])
{



    double VAR_5[3], VAR_6[3], VAR_7[3], VAR_8[3], VAR_9[3];
    double VAR_10[3 * 3];

    VAR_5[0 ] = VAR_3->red.x / VAR_3->red.y;
    VAR_5[1] = 1;
    VAR_5[2 ] = (1 - VAR_3->red.x - VAR_3->red.y) / VAR_3->red.y;

    VAR_6[0 ] = VAR_3->green.x / VAR_3->green.y;
    VAR_6[1] = 1;
    VAR_6[2 ] = (1 - VAR_3->green.x - VAR_3->green.y) / VAR_3->green.y;

    VAR_7[0 ] = VAR_3->blue.x / VAR_3->blue.y;
    VAR_7[1] = 1;
    VAR_7[2 ] = (1 - VAR_3->blue.x - VAR_3->blue.y) / VAR_3->blue.y;

    VAR_10[0 + 0*3] = VAR_5[0 ];
    VAR_10[1 + 0*3] = VAR_5[1];
    VAR_10[2 + 0*3] = VAR_5[2 ];
    VAR_10[0 + 1*3] = VAR_6[0 ];
    VAR_10[1 + 1*3] = VAR_6[1];
    VAR_10[2 + 1*3] = VAR_6[2 ];
    VAR_10[0 + 2*3] = VAR_7[0 ];
    VAR_10[1 + 2*3] = VAR_7[1];
    VAR_10[2 + 2*3] = VAR_7[2 ];

    FUNC_1(VAR_10);

    VAR_9[0] = VAR_3->white.x / VAR_3->white.y;
    VAR_9[1] = 1;
    VAR_9[2] = (1 - VAR_3->white.x - VAR_3->white.y) / VAR_3->white.y;

    FUNC_0(VAR_9, VAR_10, VAR_8);

    VAR_4[0 + 0*3] = VAR_8[0 ] * VAR_5[0 ];
    VAR_4[1 + 0*3] = VAR_8[1] * VAR_6[0 ];
    VAR_4[2 + 0*3] = VAR_8[2 ] * VAR_7[0 ];
    VAR_4[0 + 1*3] = VAR_8[0 ] * VAR_5[1];
    VAR_4[1 + 1*3] = VAR_8[1] * VAR_6[1];
    VAR_4[2 + 1*3] = VAR_8[2 ] * VAR_7[1];
    VAR_4[0 + 2*3] = VAR_8[0 ] * VAR_5[2 ];
    VAR_4[1 + 2*3] = VAR_8[1] * VAR_6[2 ];
    VAR_4[2 + 2*3] = VAR_8[2 ] * VAR_7[2 ];



}
