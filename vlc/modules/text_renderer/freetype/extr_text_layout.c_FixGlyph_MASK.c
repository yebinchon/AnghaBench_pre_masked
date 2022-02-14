
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ xMin; scalar_t__ xMax; scalar_t__ yMin; scalar_t__ yMax; } ;
struct TYPE_7__ {scalar_t__ left; scalar_t__ top; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ FT_Vector ;
typedef scalar_t__ FT_Pos ;
typedef int FT_Glyph ;
typedef TYPE_2__* FT_BitmapGlyph ;
typedef TYPE_3__ FT_BBox ;


 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( FT_Glyph VAR_0, FT_BBox *VAR_1,
                      FT_Pos VAR_2, FT_Pos VAR_3,
                      const FT_Vector *VAR_4 )
{
    FT_BitmapGlyph VAR_5 = (FT_BitmapGlyph)VAR_0;
    if( VAR_1->xMin >= VAR_1->xMax )
    {
        VAR_1->xMin = FUNC_0(VAR_4->x);
        VAR_1->xMax = FUNC_0(VAR_4->x + VAR_2);
        VAR_5->left = VAR_1->xMin;
    }
    if( VAR_1->yMin >= VAR_1->yMax )
    {
        VAR_1->yMax = FUNC_0(VAR_4->y);
        VAR_1->yMin = FUNC_0(VAR_4->y + VAR_3);
        VAR_5->top = VAR_1->yMax;
    }
}
