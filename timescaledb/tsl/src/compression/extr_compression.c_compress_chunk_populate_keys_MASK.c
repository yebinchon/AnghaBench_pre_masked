
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int16 ;
struct TYPE_6__ {size_t segmentby_column_index; size_t orderby_column_index; int attname; } ;
typedef int Oid ;
typedef TYPE_1__ ColumnCompressionInfo ;
typedef int AttrNumber ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (int) ;

__attribute__((used)) static int16 *
FUNC_8(Oid VAR_1, const ColumnCompressionInfo **VAR_2, int VAR_3,
        int *VAR_4, const ColumnCompressionInfo ***VAR_5)
{
 int16 *VAR_6 = FUNC_7(sizeof(*VAR_6) * VAR_3);

 int VAR_7;
 int VAR_8 = 0;
 *VAR_4 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  if (FUNC_3(VAR_2[VAR_7]))
   VAR_8 += 1;

  if (FUNC_3(VAR_2[VAR_7]) || FUNC_2(VAR_2[VAR_7]))
   *VAR_4 += 1;
 }

 if (*VAR_4 == 0)
  FUNC_5(VAR_0, "compression should be configured with an orderby or segment by");

 *VAR_5 = FUNC_7(sizeof(**VAR_5) * *VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  const ColumnCompressionInfo *VAR_9 = VAR_2[VAR_7];


  int16 VAR_10 = VAR_9->segmentby_column_index - 1;
  int16 VAR_11 = VAR_9->orderby_column_index - 1;
  AttrNumber VAR_12;
  if (FUNC_3(VAR_9))
   (*VAR_5)[VAR_10] = VAR_9;
  else if (FUNC_2(VAR_9))
   (*VAR_5)[VAR_8 + VAR_11] = VAR_9;

  VAR_12 = FUNC_6(VAR_1, FUNC_4(VAR_9->attname));
  if (!FUNC_1(VAR_12))
   FUNC_5(VAR_0, "could not find compressed column for \"%s\"", FUNC_4(VAR_9->attname));

  VAR_6[VAR_7] = FUNC_0(VAR_12);
 }

 return VAR_6;
}
