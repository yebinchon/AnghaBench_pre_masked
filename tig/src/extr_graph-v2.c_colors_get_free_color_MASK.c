
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colors {size_t* count; } ;


 int FUNC_0 (size_t*) ;

__attribute__((used)) static size_t
FUNC_1(struct colors *VAR_0)
{
 size_t VAR_1 = 0;
 size_t VAR_2 = (size_t) -1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->count); VAR_3++) {
  if (VAR_0->count[VAR_3] < VAR_2) {
   VAR_2 = VAR_0->count[VAR_3];
   VAR_1 = VAR_3;
  }
 }
 return VAR_1;
}
