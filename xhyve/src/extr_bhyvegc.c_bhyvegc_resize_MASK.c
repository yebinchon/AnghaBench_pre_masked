
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bhyvegc_image {int width; int height; int * data; } ;
struct bhyvegc {int raw; struct bhyvegc_image* gc_image; } ;


 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int *,int) ;

void
FUNC_2(struct bhyvegc *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 struct bhyvegc_image *VAR_3;

 VAR_3 = VAR_0->gc_image;

 VAR_3->width = VAR_1;
 VAR_3->height = VAR_2;
 if (!VAR_0->raw) {
  VAR_3->data = FUNC_1(VAR_3->data, VAR_1 * VAR_2 * sizeof (uint32_t));
  if (VAR_3->data != ((void*)0))
   FUNC_0(VAR_3->data, 0, VAR_1 * VAR_2 *
       sizeof (uint32_t));
 }
}
