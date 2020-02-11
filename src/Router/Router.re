[@react.component]
let make = _ => {
  let url = ReasonReactRouter.useUrl();
  switch (url.path) {
  | [] => <Home />
  | ["greetings"] => <Greeting />
  | ["reduce"] => <ReducerFromReactJSDocs />
  | ["blinking"] =>
    <BlinkingGreeting> {React.string("Hello!")} </BlinkingGreeting>
  | ["dog", "many"] => <FetchedDogPictures />
  | ["dog", "random"] => <FetchRandomDog />
  | _ => <div> {React.string("404 Internet not found")} </div>
  };
};