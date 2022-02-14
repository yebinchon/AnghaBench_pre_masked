
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ srcStart; scalar_t__ src; scalar_t__ dataStart; scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
typedef int BYTE ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 size_t FUNC_1 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_2 (size_t const) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static size_t FUNC_4(frame_t* VAR_3)
{

    size_t const VAR_4 = FUNC_1(VAR_0, VAR_1,
                           VAR_3->dataStart, (BYTE*)VAR_3->data - (BYTE*)VAR_3->dataStart);

    if (FUNC_2(VAR_4)) return VAR_4;

    if (FUNC_3(VAR_0, VAR_3->srcStart,
               (BYTE*)VAR_3->src - (BYTE*)VAR_3->srcStart) != 0) {
        return FUNC_0(VAR_2);
    }

    return VAR_4;
}
