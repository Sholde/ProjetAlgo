# ProjetAlgo

Structure liste : un simple liste chainée

Structure Insert : pas d'idée pour le nom
  - tableau compteur :
    - utiliter : stocker le nb d'arc a partir d'un sommet
    - comment faire : on creer un tableau a deux dimension
                      - 1er dimension : taille du graphe (logique)
                      - 2eme dimension : de taille 3 car il peut y avoir un arc vers le tier 1 ou 2 ou 3
                 
  - tableau proba : 
    - utiliter : stocker le nb de noeuds vers le meme tier que le sommet a l'indice
    - comment faire : on creer un tableau a deux dimension
                      - 1er dimension : taille du graphe (logique)
                      - 2eme dimension : de taille 1 (logique)
                   
                   
 Structure graphe : 
    - tableau list :
        - 1er dimension : taille du graphe (logique)
        - 2eme dimension : de taille 3 car il peut y avoir un arc vers le tier 1 ou 2 ou 3
        - 3eme dimension : taille indefini car c'est une liste de voisin
        
    - tableau I :
        simple struct Insert

  
