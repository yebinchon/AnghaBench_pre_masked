
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ height; int width; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct view *VAR_2, struct view *VAR_3)
{
 VAR_3->width = VAR_2->width;
 VAR_3->height = FUNC_2(VAR_1, VAR_2->height);
 VAR_3->height = FUNC_0(VAR_3->height, VAR_0);
 VAR_3->height = FUNC_1(VAR_3->height, VAR_2->height - VAR_0);
 VAR_2->height -= VAR_3->height;
}
