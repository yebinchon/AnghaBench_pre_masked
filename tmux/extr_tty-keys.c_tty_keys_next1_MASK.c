
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t u_int ;
typedef int u_char ;
struct utf8_data {size_t size; } ;
struct tty_key {scalar_t__ key; struct tty_key* next; } ;
struct tty {struct client* client; } ;
struct client {int name; } ;
typedef scalar_t__ key_code ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,...) ;
 struct tty_key* FUNC_1 (struct tty*,char const*,size_t,size_t*) ;
 int FUNC_2 (struct utf8_data*,int ) ;
 int FUNC_3 (struct utf8_data*,scalar_t__*) ;
 int FUNC_4 (struct utf8_data*,int ) ;
 int FUNC_5 (char const*,size_t,size_t*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(struct tty *VAR_3, const char *VAR_4, size_t VAR_5, key_code *VAR_6,
    size_t *VAR_7, int VAR_8)
{
 struct client *VAR_9 = VAR_3->client;
 struct tty_key *VAR_10, *VAR_11;
 struct utf8_data VAR_12;
 enum utf8_state VAR_13;
 u_int VAR_14;
 wchar_t VAR_15;
 int VAR_16;

 FUNC_0("%s: next key is %zu (%.*s) (expired=%d)", VAR_9->name, VAR_5,
     (int)VAR_5, VAR_4, VAR_8);


 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_10 != ((void*)0) && VAR_10->key != VAR_0) {
  VAR_11 = VAR_10;
  do
   FUNC_0("%s: keys in list: %#llx", VAR_9->name, VAR_11->key);
  while ((VAR_11 = VAR_11->next) != ((void*)0));
  if (VAR_10->next != ((void*)0) && !VAR_8)
   return (1);
  *VAR_6 = VAR_10->key;
  return (0);
 }


 VAR_16 = FUNC_5(VAR_4, VAR_5, VAR_7, VAR_6);
 if (VAR_16 == 0)
  return (0);
 if (VAR_16 == 1 && !VAR_8)
  return (1);


 VAR_13 = FUNC_4(&VAR_12, (u_char)*VAR_4);
 if (VAR_13 == VAR_2) {
  *VAR_7 = VAR_12.size;
  if (VAR_5 < VAR_12.size) {
   if (!VAR_8)
    return (1);
   return (-1);
  }
  for (VAR_14 = 1; VAR_14 < VAR_12.size; VAR_14++)
   VAR_13 = FUNC_2(&VAR_12, (u_char)VAR_4[VAR_14]);
  if (VAR_13 != VAR_1)
   return (-1);

  if (FUNC_3(&VAR_12, &VAR_15) != VAR_1)
   return (-1);
  *VAR_6 = VAR_15;

  FUNC_0("%s: UTF-8 key %.*s %#llx", VAR_9->name, (int)VAR_12.size,
      VAR_4, *VAR_6);
  return (0);
 }

 return (-1);
}
