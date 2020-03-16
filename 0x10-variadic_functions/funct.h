/**
 * print_c? (- print c)?
 *
 * @ap: input format
 * Return:
 */
void print_c(va_list ap)
{
        printf("%c", va_arg(ap, int));
}
/**
 * print_i? (- print int)?
 *
 * @ap: input format
 * Return:
 */
void print_i(va_list ap)
{
        printf("%d", va_arg(ap, int));
}
/**
 * print_f? (- print f)?
 *
 * @ap: input format
 * Return:
 */
void print_f(va_list ap)
{
        printf("%f", va_arg(ap, double));
}
/**
 * print_s? (- print s)?
 *
 * @ap: input format
 * Return:
 */
void print_s(va_list ap)
{
        char *str = va_arg(ap, char *);

        if (str != NULL)
                printf("%s", str);
        else
                printf("(nil)");
}
