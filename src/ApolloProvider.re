[@bs.config {jsx: 3}];

open ApolloClient;

[@bs.module "react-apollo"]
external make:
  (~client: generatedApolloClient, ~children: 'children) => React.element =
  "ApolloProvider";
