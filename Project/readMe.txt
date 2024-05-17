dokumentace spolu s diagramem se nachází ve složce dokumentace. projekt zle zkompilovat pomocí: Project$ make ./build/main


Body zadání a kde se nacházejí.


2. kompozice (hierarchie) objektů. (1 b)    DiscountedProduct obsahuje objekt třídy Product

3. obsahuje a používá přetížené metody (1 b)    metody getName a getPrice jsou přetěženy v třídách Electronics, Food a Clothing

4. obsahuje a používá třídu v roli objektu (1 b)    DiscountedProduct obsahuje objekt třídy Product jako svůj atribut

5. dědičná hierarchie alespoň 3 tříd (1 b)      za abstraktní třídy Product dědí třídy Electronics, Food a Clothing

6.A dědičná hierarchie využívá rozšíření dat a chování (0,5 b)      třídy Electronics, Food a Clothing rozšiřují třídu product o své atgributy
6.B dědičná hierarchie využívá změnu chování a datové položky na úrovni 'protected' (0,5 b)      Electronics dědí od třídy Product a může používat data na úrovni protected 

7. čistě abstraktní třída (1 b)  třída Product je čistě abstraktní

8.A polymorfní přiřazení (0,5 b)    polymorfní přiřazení je v mainu při vytváření DiscountedProduct
8.B polymorfní datová struktura (0,5 b)     polymorfní datová struktura je vidět při využítí Store v mainu