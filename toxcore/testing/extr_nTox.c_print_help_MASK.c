
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_0)
{
    FUNC_0("nTox %.1f - Command-line tox-core client\n", 0.1);
    FUNC_0("Usage: %s [--ipv4|--ipv6] IP PORT KEY [-f keyfile]\n", VAR_0);

    FUNC_1("Options: (order IS relevant)");
    FUNC_1("  --ipv4 / --ipv6 [Optional] Support IPv4 only or IPv4 & IPv6.");
    FUNC_1("  IP PORT KEY     [REQUIRED] A node to connect to (IP/Port) and its key.");
    FUNC_1("  -f keyfile      [Optional] Specify a keyfile to read from and write to.");
}
