
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bhyvegc_image {int width; int height; void* data; } ;
struct bhyvegc {int raw; struct bhyvegc_image* gc_image; } ;


 void* FUNC_0 (int,int) ;

struct bhyvegc *
FUNC_1(uint16_t VAR_0, uint16_t VAR_1, void *VAR_2)
{
 struct bhyvegc *VAR_3;
 struct bhyvegc_image *VAR_4;

 VAR_3 = FUNC_0(1, sizeof (struct bhyvegc));

 VAR_4 = FUNC_0(1, sizeof(struct bhyvegc_image));
 VAR_4->width = VAR_0;
 VAR_4->height = VAR_1;
 if (VAR_2) {
  VAR_4->data = VAR_2;
  VAR_3->raw = 1;
 } else {
  VAR_4->data = FUNC_0(VAR_0 * VAR_1, sizeof (uint32_t));
  VAR_3->raw = 0;
 }

 VAR_3->gc_image = VAR_4;

 return (VAR_3);
}
