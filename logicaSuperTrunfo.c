#include <stdio.h>

void Vencedora(int resultado) {

    // Verifica o valor do resultado
    if (resultado == 1) {
        // Se o resultado for 1
        printf(" Carta 1\n");
    } else if (resultado == 0) {
        // Se o resultado for 0
        printf(" Carta 2\n");
    } else {
        printf("Empate\n");
    }
}

int main() {

    //daqui prabaixo declaro todas as variavéis
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    char pais1[15], pais2[15];      
    char codigo1[5], codigo2[5];
    char cidade1[10], cidade2[10];

    //Aqui eu faço as regras de if e else


    printf("Super Trunfo de Cidades - Desafio Mestre\n");
    printf("\n");
    printf("Cadastre duas cartas para começar!\n");
    printf("\n");
    printf("Registre as cartas nesse modelo apresentado embaixo.\n");
    printf("\n");
    printf("País: chile \n");
    printf("Código: C01\n");
    printf("Cidade: Santiago\n");
    printf("População: 400\n");
    printf("Área: 20\n");
    printf("PIB: 800\n");
    printf("Pontos Turísticos: 10\n");
    printf("\n");

    // Cadastro da Carta 1
    
    printf("Informe as informações da Carta 1:\n");
    printf("País: ");
    scanf(" %s", &pais1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    // Cadastro da Carta 2
    printf("\nInforme as informações da Carta 2:\n");
    printf("País: ");
    scanf(" %s", &pais2);
    printf("Código: ");
    scanf(" %s", codigo2);
    printf("Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos2);

   
    //cálculo de Densidade e renda percapita

    float Densidade1 = (float) populacao1 / area1;
    float Densidade2 = (float) populacao2 / area2;
    float rp1 = pib1 / (float) populacao1;
    float rp2 = pib2 / (float) populacao2;

    //Aqui faço o calculo de super poder

    float super1 = (float) populacao1 + area1 + pib1 + pontos1 + rp1 + Densidade1;
    float super2 = (float) populacao2 + area2 + pib2 + pontos2 + rp2 + Densidade2;


    // Aqui exibo todas informações das cartas registradas

    printf("\nInformações da Carta 1:\n");
    printf("País: %s\n", pais1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d Mil pessoas.\n", populacao1);
    printf("Área: %.2f Km².\n", area1);
    printf("PIB: %.2f Milhões de reais.\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f Mil Pessoas por Km².\n", Densidade1);
    printf("Pib per capta: %.2f Mil reais por pessoa.\n", rp1);
    printf("\n");
    printf("A carta %s tem super poder de valor: %.2f\n", codigo1, super1 );


    printf("\nInformações da Carta 2:\n");
    printf("País: %s\n", pais2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d Mil pessoas.\n", populacao2);
    printf("Área: %.2f Km².\n", area2);
    printf("PIB: %.2f Milhões de reais.\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f Mil Pessoas por Km²\n", Densidade2);
    printf("PIB Per Capta: %.2f Mil reais por pessoa.\n", rp2);
    printf("\n");
    printf("A carta %s tem super poder de valor: %.2f\n", codigo2, super2);


    int opcao;

    printf("###- MENU SUPERTRUNFO -###\n");
    printf("1. Comparar população\n");
    printf("2. Comparar área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar pontos túristicos\n");
    printf("5. Comparar densidade populacional\n");
    printf("6. Comparar PIB per capta\n");
    printf("7. Comparar super poder\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas
      int pop = (populacao1 == populacao2) ? -1 : (populacao1 > populacao2);

      printf ("Disputa de População:\n");
      if (pop == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(pop);
      } else if (pop == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(pop);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(pop);
    }
      
      break;

      case 2:
        int area = (area1 == area2) ? -1: (area1 > area2);

      printf ("Disputa de :\n");
      if (area == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(area);
      } else if (area == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(area);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(area);
    }

      
      break;

      case 3:
      int pib = (pib1 == pib2) ? -1: (pib1 > pib2);
      
      printf ("Disputa de PIB:\n");
      if (pib == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(pib);
      } else if (pib == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(pib);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(pib);
    }
      break;
        case 4:

        int pontos = (pontos1 == pontos2) ? -1: (pontos1 > pontos2);

        printf ("Disputa de Pontos Túristicos:\n");
      if (pontos == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(pontos);
      } else if (pontos == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(pontos);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(pontos);
    }
    

      break;
        case 5:
        int dens = (Densidade1 == Densidade2) ? -1: Densidade1 < Densidade2;

        printf ("Disputa de Densidade Populacional:\n");
      if (dens == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(dens);
      } else if (dens == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(dens);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(dens);
    }

      break;
        case 6:
        int rp = (rp1 == rp2) ? -1: (rp1 > rp2);

        printf ("Disputa de PIB Per capta:\n");
    
      if (rp == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(rp);
      } else if (rp == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(rp);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(rp);
    }
      break;

      case 7:

      int super = (super1 == super2) ? -1: (super1 > super2);

      printf ("Disputa de Super poder:\n");
      if (super == 1) 
      {
        printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
        Vencedora(super);
      } else if (super == 0)
      {
      printf(" Na disputa entre %s e %s a Vencedora é:", pais1, pais2);
      Vencedora(super);
      } else {
      printf(" Na disputa entre %s e %s a disputa deu:", pais1, pais2);
      Vencedora(super);
    }
  
      break;
      
      case 8:
    
      printf("Saindo...\n");
      break;

      default:
      printf("Opção inválida. Tente novamente.\n");
  }



    printf ("\n");
    printf("Muito obrigado!\n");
    return 0;
    
}
