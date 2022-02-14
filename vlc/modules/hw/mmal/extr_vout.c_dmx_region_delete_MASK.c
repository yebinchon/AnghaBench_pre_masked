
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmx_region_t {int resource; int element; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int FUNC_0 (struct dmx_region_t*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dmx_region_t *VAR_0,
                DISPMANX_UPDATE_HANDLE_T VAR_1)
{
    FUNC_1(VAR_1, VAR_0->element);
    FUNC_2(VAR_0->resource);
    FUNC_0(VAR_0);
}
