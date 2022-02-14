
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_commit {void* filename; void* parent_filename; int parent_id; int title; int time; int author; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 void* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char**) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (char*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (char*) ;

bool
FUNC_10(struct blame_commit *VAR_2, char VAR_3[VAR_1], char *VAR_4)
{
 if (FUNC_2("author ", &VAR_4)) {
  FUNC_8(VAR_3, VAR_1, VAR_4, FUNC_9(VAR_4));

 } else if (FUNC_2("author-mail ", &VAR_4)) {
  char *VAR_5 = FUNC_5(VAR_4, '>');

  if (VAR_5)
   *VAR_5 = 0;
  if (*VAR_4 == '<')
   VAR_4++;
  VAR_2->author = FUNC_0(VAR_3, VAR_4);
  VAR_3[0] = 0;

 } else if (FUNC_2("author-time ", &VAR_4)) {
  FUNC_3(&VAR_2->time, VAR_4);

 } else if (FUNC_2("author-tz ", &VAR_4)) {
  FUNC_4(&VAR_2->time, VAR_4);

 } else if (FUNC_2("summary ", &VAR_4)) {
  FUNC_7(VAR_2->title, VAR_4, FUNC_9(VAR_4));

 } else if (FUNC_2("previous ", &VAR_4)) {
  if (FUNC_9(VAR_4) <= VAR_0)
   return 0;
  FUNC_6(VAR_2->parent_id, VAR_4);
  VAR_4 += VAR_0;
  VAR_2->parent_filename = FUNC_1(VAR_4);
  if (!VAR_2->parent_filename)
   return 1;

 } else if (FUNC_2("filename ", &VAR_4)) {
  VAR_2->filename = FUNC_1(VAR_4);
  return 1;
 }

 return 0;
}
