
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph_v2 {int is_boundary; } ;
struct graph_row {size_t size; struct graph_column* columns; } ;
struct TYPE_2__ {int boundary; } ;
struct graph_column {char const* id; TYPE_1__ symbol; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct graph_column*,struct graph_column*,int) ;
 int FUNC_2 (struct graph_column*,int ,int) ;
 int FUNC_3 (struct graph_column**,size_t,int) ;

__attribute__((used)) static struct graph_column *
FUNC_4(struct graph_v2 *VAR_0, struct graph_row *VAR_1, size_t VAR_2, const char *VAR_3)
{
 struct graph_column *VAR_4;

 if (!FUNC_3(&VAR_1->columns, VAR_1->size, 1))
  return ((void*)0);

 VAR_4 = &VAR_1->columns[VAR_2];
 if (VAR_2 < VAR_1->size) {
  FUNC_1(VAR_4 + 1, VAR_4, sizeof(*VAR_4) * (VAR_1->size - VAR_2));
 }

 VAR_3 = FUNC_0(VAR_3);

 VAR_1->size++;
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->id = VAR_3;
 VAR_4->symbol.boundary = !!VAR_0->is_boundary;

 return VAR_4;
}
