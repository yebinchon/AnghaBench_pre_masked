
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct utf8_data {int size; scalar_t__ width; scalar_t__* data; } ;
struct grid_cell {struct utf8_data data; } ;
struct grid {int dummy; } ;


 int FUNC_0 (struct grid*,int ,int ,struct grid_cell*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct grid *VAR_0, u_int VAR_1, u_int VAR_2,
    struct grid *VAR_3, u_int VAR_4, int VAR_5)
{
 struct grid_cell VAR_6, VAR_7;
 const struct utf8_data *VAR_8, *VAR_9;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_6);
 VAR_8 = &VAR_6.data;
 FUNC_0(VAR_3, VAR_4, 0, &VAR_7);
 VAR_9 = &VAR_7.data;

 if (VAR_8->size != VAR_9->size || VAR_8->width != VAR_9->width)
  return (0);

 if (VAR_5 && VAR_8->size == 1)
  return (FUNC_2(VAR_8->data[0]) == VAR_9->data[0]);

 return (FUNC_1(VAR_8->data, VAR_9->data, VAR_8->size) == 0);
}
