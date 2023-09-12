void n() {
      int x, p1, p2, p3;

    printf("Digite um numero de tres digitos (100 a 999): ");
    scanf("%d", &x);

    p1 = x / 100;        // Obtém o primeiro dígito
    p2 = (x / 10) % 10;  // Obtém o segundo dígito
    p3 = x % 10;         // Obtém o terceiro dígito

    printf("%d\n%d%d%d", x, p3, p2, p1);

}
