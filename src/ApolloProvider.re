[@bs.config {jsx: 3}];

open ApolloClient;

[@react.component] [@bs.module "react-apollo"]
external make:
  (~client: generatedApolloClient, ~children: 'children) => React.element =
  "ApolloProvider";
