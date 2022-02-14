
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_height; int i_width; } ;
struct TYPE_10__ {TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
typedef int filter_t ;
struct TYPE_11__ {scalar_t__ fourcc; } ;
typedef TYPE_3__ VAImageFormat ;
typedef int VAImage ;
typedef int VADisplay ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,int*) ;
 TYPE_3__* FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,TYPE_3__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_7(filter_t *VAR_5, picture_t *VAR_6,
                               VADisplay VAR_7, VAImage *VAR_8)
{
    int VAR_9 = FUNC_3(VAR_7);

    VAImageFormat *VAR_10 = FUNC_5(VAR_9, sizeof (*VAR_10));
    if (FUNC_2(VAR_10 == ((void*)0)))
        return VAR_3;

    if (FUNC_4(VAR_7, VAR_10, &VAR_9))
    {
        FUNC_1(VAR_10);
        return VAR_2;
    }

    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
        if (VAR_10[VAR_11].fourcc == VAR_0
         || VAR_10[VAR_11].fourcc == VAR_1)
            break;

    int VAR_12;
    if ((VAR_10[VAR_11].fourcc == VAR_0 || VAR_10[VAR_11].fourcc == VAR_1)
     && !FUNC_6(FUNC_0(VAR_5), VAR_7, &VAR_10[VAR_11],
                               VAR_6->format.i_width, VAR_6->format.i_height,
                               VAR_8))
        VAR_12 = VAR_4;
    else
        VAR_12 = VAR_2;

    FUNC_1(VAR_10);

    return VAR_12;
}
