type card = {
  visible: bool,
  value: int,
};

type t = array(card);

let generateCards = () => {
  [
    {visible: false, value: 0},
    {visible: false, value: 1},
    {visible: false, value: 3},
    {visible: false, value: 1},
    {visible: false, value: 0},
    {visible: false, value: 2},
    {visible: false, value: 2},
    {visible: false, value: 3},
  ];
};

/* let allVisible = (cards) => {
     cards |> List.for_all((card) => card.visible === true);
   } */

let flipCard = (index, cards) => {
  let visiblePairPositions =
    cards
    |> List.mapi((cardIndex, card) => {
         let valueCount =
           cards
           |> List.filter(c =>
                card.visible === true
                && c.visible === true
                && card.value === c.value
              )
           |> List.length;
         valueCount >= 2;
       });

  let visibleCount =
    cards
    |> List.fold_left((count, card) => card.visible ? count + 1 : count, 0);

  cards
  |> List.mapi((cardIndex, card) =>
       cardIndex === index ? {...card, visible: true} : card
     )
  |> List.map2(
       (isVisiblePair, card) =>
         visibleCount mod 2 === 0 && !isVisiblePair ?
           {...card, visible: false} : card,
       visiblePairPositions,
     )
  |> List.mapi((cardIndex, card) =>
       cardIndex === index ? {...card, visible: true} : card
     );
};
